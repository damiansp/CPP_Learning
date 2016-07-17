/* signalHandling.cpp */
#include <csignal>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using std::setw;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void signalHandler(int signalVal) {
  int response;
  
  cout << "\nInterrupt signal (" << signalVal << ") received.\n"
       << "Do you wish to continue? (1: yes; 2: no)\n> ";
  cin >> response;

  // Bad input
  while (response != 1 && response != 2) {
    cout << "(1: yes, 2: no)\n> ";
    cin >> response;
  }

  if (response == 1) {
    signal(SIGINT, signalHandler);
  } else {
    exit(EXIT_SUCCESS);
  }
}



int main() {
  signal(SIGINT, signalHandler);
  srand(time(0));

  for (int i = 1; i < 101; i++) {
    int x = 1 + rand() % 50;

    if (x == 25) {
      raise(SIGINT);
    }

    cout << setw(4) << i;

    if (i % 10 == 0) {
      cout << endl;
    }
  }
  
  return 0;
}
