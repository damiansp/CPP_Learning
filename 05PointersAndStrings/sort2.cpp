/* sort using function pointers */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

/* swap two elements in memory */
void swap(int *const element1Ptr, int *const element2Ptr) {
  int temp;

  temp = *element1Ptr;
  *element1Ptr = *element2Ptr;
  *element2Ptr = temp;
}

/* modified bubble sort using pointer to function */
void bubble(int work[], const int size, bool (*compare) (int, int)) {
  for (int pass = 1; pass < size; pass++) {
    for (int count = 0; count < size - 1; count++) {
      if ((*compare)(work[count], work[count + 1])) {
        swap(&work[count], &work[count + 1]);
      }
    }
  }
}

bool sortAscending(int a, int b) {
  return b < a; // swap if true
}

bool sortDescending(int a, int b) {
  return b > a;
}



int main() {
  const int arraySize = 10;
  int order, counter,
    a[arraySize] = {11, 3, 76, 12, 21, 75, 3, 13, 80, 8};

  cout << "1: sort ascending\n2: sort descending: ";
  cin >> order;

  cout << "Original order\n> ";
  for (counter = 0; counter < arraySize; counter++) {
    cout << setw(4) << a[counter];
  }

  cout << endl;

  if (order == 1) {
    bubble(a, arraySize, sortAscending);
    cout << "In ascending order\n> ";
  } else {
    bubble(a, arraySize, sortDescending);
    cout << "In descending order\n> ";
  }

  for (counter = 0; counter < arraySize; counter++) {
    cout << setw(4) << a[counter];
  }

  cout << endl;

  return 0;
}
