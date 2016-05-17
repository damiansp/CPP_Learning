/* Do a linear search of an array */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int linearSearch(const int array[], int key, int arraySize) {
  for (int n = 0; n < arraySize; n++) {
    if (array[n] == key) {
      return n;
    }
  }

  return -1;
}



int main() {
  const int arraySize = 100;
  int a[arraySize],
    searchKey,
    element;

  // create some data for a[]
  for (int i = 0; i < arraySize; i++) {
    a[i] = 2 * i;
  }

  cout << "Enter integer search key: " << endl;
  cin >> searchKey;
  element = linearSearch(a, searchKey, arraySize);

  if (element != -1) {
    cout << "Found value at index "  << element << endl;
  } else {
    cout << searchKey << " not found.\n\n";
  }
  
  return 0;
}
