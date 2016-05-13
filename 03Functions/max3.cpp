/* Find the max of 3 ints */
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int max3(int x, int y, int z) {
  int max = x;

  if (y > max) {
    max = y;
  }

  if (z > max) {
    max = z;
  }

  return max;
}

int main() {
  int a, b, c;

  cout << "Enter 3 integer values: ";
  cin >> a >> b >> c;

  cout << "The maximum value was: " << max3(a, b, c) << endl;

  return 0;
}
