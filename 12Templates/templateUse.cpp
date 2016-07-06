/* templateUse.cpp */
// Intro to template funcs
#include <iostream>
using std::cout;
using std::endl;

template<class T>
void printArray(const T* array, const int count) {
  for (int i = 0; i < count; i++) {
    cout << array[i] << ' ';
  }

  cout << endl;
}


int main() {
  const int aCount = 5,
    bCount = 7,
    cCount = 6;
  int a[aCount] = { 1, 2, 3, 4, 5 };
  double b[bCount] = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7 };
  char c[cCount] = "Hello";

  cout << "Array a contains: " << endl;
  printArray(a, aCount);

  cout << "Array b:" << endl;
  printArray(b, bCount);

  cout << "Array c:" << endl;
  printArray(c, cCount);

  return 0;
}
