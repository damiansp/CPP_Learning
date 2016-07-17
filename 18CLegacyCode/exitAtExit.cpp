/* exitAtExit.cpp */
// Using exit and atexit funcs (C legacy)
#include <cstdlib>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void print(void) {
  cout << "Executing function print at program termination\n"
       << "Program terminated" << endl;
}



int main() {
  int answer;
  
  atexit(print); // register print function

  cout << "Enter 1 to terminate program with function exit;"
       << "\n      2 to terminate program normally\n";

  cin >> answer;

  if (answer == 1) {
    cout << "\nTerminating with function exit\n";
    exit(EXIT_SUCCESS);
  }

  cout << "\nTerminating by reaching the end of main()" << endl;

  return 0;
}
