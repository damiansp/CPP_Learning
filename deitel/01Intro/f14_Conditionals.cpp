// Using conditionals
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  int num1, num2;
  
  cout << "Enter 2 integers: ";
  cin >> num1 >> num2;

  if ( num1 == num2) {
    cout << num1 << " is equal to " << num2 << endl;
  }

  if (num1 < num2) {
    cout << num1 << " is less than " << num2 << endl;
  }

  if (num1 > num2) {
    cout << num1 << " is greater than " << num2 << endl;
  }

  return 0;
}
