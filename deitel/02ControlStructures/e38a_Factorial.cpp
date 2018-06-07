/* Read n and return n! */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int n;
  int product = 1;

  /* Read n from user */
  cout << "Compute the factorial of (int): ";
  cin >> n;

  while (n > 1) {
    product *= n--;
  }

  cout << product << endl;
  
  return 0;
}
