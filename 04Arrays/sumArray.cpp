/* Sum the elements of an array */
#include <iostream>
using std::cout;
using std::endl;

int main() {
  const int arraySize = 12;
  int a[arraySize] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
  int total = 0;

  for (int i = 0; i < arraySize; i++) {
    total += a[i];
  }

  cout << "Total of elements in array is " << total << endl;
  
  return 0;
}
