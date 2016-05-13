/* Calculate an exponent using a recursive function */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int exponent(double base, int power) {
  if (power == 0) {
    return 1;
  }

  // base case:
  if (power == 1) {
    return base;
  } else {
    return base * exponent(base, power - 1);
  }
}


int main() {
  int power;
  double base;

  cout << "Enter a base (any number): ";
  cin >> base;

  cout << "...and an exponent (non-negative ints only): ";
  cin >> power;

  if (power < 0) {
    cout << "Bad exponent.";
    return 1;
  }

  cout << base << "^" << power << " = " << exponent(base, power) << endl;
  
  return 0;
}
