/* Cube a value using call-by-value */
#include <iostream>
using std::cout;
using std::endl;

int cubeByValue(int n) {
  // cube local var n
  return n * n * n;
}

int main() {
  int number = 5;

  cout << "Number = " << number;

  number = cubeByValue(number);
  cout << "\nAfter number = cubeByValue(number), number = " << number << endl;

  return 0;
}
