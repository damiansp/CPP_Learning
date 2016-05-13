/* Calculate the greatest common divisor of two ints */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int getGCD(int n1, int n2) {
  int gcd = 1;
  int min = (n1 > n2 ? n2 : n1);

  for (int i = 2; i <= min / 2; i++) {
    if (n1 % i == 0 & n2 % i == 0) {
      gcd = i;
    }
  }

  if (n1 % n2 == 0 | n2 % n1 == 0) {
    gcd = min;
  }
  
  return gcd;
}


int main() {
  int n1, n2;
  
  cout << "Enter 2 ints to find the greatest common divisor: ";
  cin >> n1 >> n2;
  cout << "GCD: " << getGCD(n1, n2) << endl;
  
  return 0;
}
