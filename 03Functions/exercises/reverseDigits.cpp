/* Reverse digits of input
 * e.g., if input = 12345, return 54321
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int revDigits(int n) {
  int lastDigit,
    reversed = 0;

  while (n > 0) {
    lastDigit = n % 10;
    n /= 10;
    reversed = reversed * 10 + lastDigit;
  }

  return reversed;
}



int main() {
  int n, rev;
  
  cout << "Enter an integer value: ";
  cin >> n;

  rev = revDigits(n);

  cout << n << " with its digits reversed is: " << rev << endl;
  

  return 0;
}
