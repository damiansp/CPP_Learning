/* use sizeof on array for n bytes in array */
#include <iostream>
using std::cout;
using std::endl;

size_t getSize(double *ptr) {
  return sizeof(ptr);
}

int main() {
  double array[20];

  cout << "sizeof(array):\n> " << sizeof(array) << " (bytes)" << endl
       << "getSize(array):\n> " << getSize(array) << " (bytes)" << endl;

  return 0;
}
