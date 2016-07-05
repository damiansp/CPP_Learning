/* fieldWidth.cpp */
// The width member function
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int w = 4;
  char string[10];

  cout << "Enter a sentence:\n";
  cin.width(5);

  while (cin >> string) {
    cout.width(w++);
    cout << string << endl;
    cin.width(5);
  }

  return 0;
}
