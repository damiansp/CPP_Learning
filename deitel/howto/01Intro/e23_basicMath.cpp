// Exercise 1.23
// Get to ints from user; print sum, diff, prod and quot
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
  int int1, int2, sum, diff, prod;
  double quot;

  cout << "Enter two ints: ";
  cin >> int1 >> int2;
  
  sum = int1 + int2;
  diff = int1 - int2;
  prod = int1 * int2;
  quot = int1 / int2;

  cout << "Sum: " << sum << endl;
  cout << "Diff: " << diff << endl;
  cout << "Prod: " << prod << endl;
  cout << "Quot: " << quot << endl; // int division!

  return 0;
}
