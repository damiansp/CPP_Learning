/* Compute the sum of the first n terms to apporximate e^x =
 * 1 + x/1! + x^2/2! + ... + x^n/n! */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int n,       /* number of terms */
    x,         /* the exponent */
    numerator = 1, /* x^n of the current term */
    factorial = 1; /* x! of the current term */
  float sum = 1;       /* sum of all terms so far */
  
  cout << "Compute e^x as the sum of the first n terms of x^n/n! Enter n: ";
  cin >> n;
  cout << "Enter x: ";
  cin >> x;

  for (int i = 1; i <= n; i++) {
    numerator *= x;
    factorial *= i;
    sum += ((float) numerator / factorial);
  }

  cout << "e^" << x << " = " << sum << " (appx.)" << endl;
  
  return 0;
}
