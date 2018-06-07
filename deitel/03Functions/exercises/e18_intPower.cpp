/*  intPower(base, exp) raises a base <base> to the <exp> power */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int base, exp, answer;

  cout << "Enter base: " << endl;
  cin >> base;
  answer = base;
  cout << "Enter exponent: " << endl;
  cin >> exp;
  cout << base << "^" << exp << " = ";

  while (exp-- > 1) {
    answer *= base;
  }

  cout << answer << endl;
  
  return 0;
}
