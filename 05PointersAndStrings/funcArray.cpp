/* using an array of pointers to functions */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void f1(int a) {
  cout << a << " entered. Function 1 called" << endl << endl;
}

void f2(int b) {
  cout << b << " entered. Function 2 called" << endl << endl;
}

void f3(int c) {
  cout << c << " entered. Function 3 called" << endl << endl;
}



int main() {
  void (*funcs[3])(int) = { f1, f2, f3 };
  int choice;

  cout << "Enter an option between 1 and 3 (or 9 to quit): ";
  cin >> choice;

  while (choice > 0 && choice < 4) {
    (*funcs[choice - 1])(choice);

    cout << "Enter an option between 1 and 3 (or 9 to quit): ";
    cin >> choice;
  }

  return 0;
}
