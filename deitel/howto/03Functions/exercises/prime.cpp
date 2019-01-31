/* Determine if a number is prime */
#include <iostream>
using std::cout;
using std::endl;

#include <cmath>


bool isPrime(int n) {
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}



int main() {
  cout << "Prime numbers up to 10000:" << endl;
  for (int i = 1; i <= 10000; i++) {
    if (isPrime(i)) {
      cout << i << "   ";
    }
  }

  cout << endl;
  
  return 0;
}

