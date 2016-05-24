/* Sort and print an aribitrary array */
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

/* swap to ints in memory */
void swap(int *const element1Ptr, int *const element2Ptr) {
  int hold = *element1Ptr;
  *element1Ptr = *element2Ptr;
  *element2Ptr = hold;
}

void bubbleSort(int *array, const int size) {
  for (int pass = 0; pass < size - 1; pass++) {
    for (int j = 0; j < size - 1; j++) {
      if (array[j] > array[j + 1]) {
        swap(&array[j], &array[j + 1]);
      }
    }
  }
}


int main() {
  const int arraySize = 10;
  int a[arraySize] = {6, 1, 8, 0, 1, 9, 7, 4, 0, 5};

  cout << "a:\n> ";

  for (int i = 0; i < arraySize; i++) {
    cout << setw(3) << a[i];
  }

  cout << endl;
  bubbleSort(a, arraySize);

  cout << "bubbleSort(a, arraySize):\n> ";
  
  for (int i = 0; i < arraySize; i++) {
    cout << setw(3) << a[i];
  }

  cout << endl;
  
  return 0;
}
