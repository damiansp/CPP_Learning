/* determine if a number is the sum of its factors 
 * e.g. 6 = 1 + 2 + 3
 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool isPerfect(int n) {
  bool perfect = false;
  int sumOfFactors = 1;

  cout << "1  ";
  
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      cout << "+ " << i << " ";
      sumOfFactors += i;
    }
  }

  cout << " = " << sumOfFactors;
  if (sumOfFactors == n) {
    perfect = true;
  }

  cout << endl << n << " is " << (perfect ? "" : "not ") << "perfect" << endl;

  return perfect;
}



int main() {
  int n;
  
  cout << "Enter a number to see if it is perfect: ";
  cin >> n;
  isPerfect(n);

  return 0;
}
