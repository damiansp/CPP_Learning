/* Given a number like 97643 return 9  7  6  4  3  for number < 100000 */
#include <iostream>
using std::cout;
using std::endl;

int getRemainder(int n, int divisor) {
  return n % divisor;
}

int getIntQuotient(int n, int divisor) {
  return n / divisor;
}

void parseNumber(int n) {
  int remainder,
    divisor = 10000;
  
  while (n > 9) {
    cout << getIntQuotient(n, divisor) << "  ";
    n = getRemainder(n, divisor);
    divisor /= 10;
  }
  cout << n << endl;
}

int main() {
  int n = 12345;

  cout << "n = " << n << endl;
  parseNumber(n);

  n = 97650;
  cout << "n = " << n << endl;
  parseNumber(n);
  
  return 0;
}
