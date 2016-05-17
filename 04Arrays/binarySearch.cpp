/* binary search of (sorted) array */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;


void printHeader(int size) {
  int i;

  cout << "\nSubscripts:\n";

  for (i = 0; i < size; i++) {
    cout << setw(3) << i << ' ';
  }

  cout << '\n';

  for (i = 1; i <= 4 * size; i++ ) {
    cout << '-';
  }

  cout << endl;
}

void printRow(const int b[], int low, int mid, int high, int size) {
  for (int i = 0; i < size; i++) {
    if (i < low || i > high) {
      cout << "    ";
    } else if (i == mid) {
      cout << setw(3) << b[i] << '*';
    } else {
      cout << setw(3) << b[i] << ' ';
    }

    cout << endl;
  }
}

int binarySearch(const int b[], int searchKey, int low, int high, int size) {
  int middle;

  while (low <= high) {
    middle = (low + high) / 2;
    printRow(b, low, middle, high, size);

    if (searchKey == b[middle]) {
      return middle;
    } else if (searchKey < b[middle]) {
      high = middle - 1;
    } else {
      low = middle + 1;
    }
    
  }

  return -1;
}



int main() {
  const int arraySize = 15;
  int a[arraySize],
    key,
    result;

  // populate a[]
  for (int i = 0; i < arraySize; i++) {
    a[i] = 2 * i;
  }

  cout << "Enter an even number between 0 and 28: ";
  cin >> key;

  printHeader(arraySize);
  result = binarySearch(a, key, 0, arraySize - 1, arraySize);

  if (result != -1) {
    cout << '\n' << key << " found at index " << result << endl;
  } else {
    cout << '\n' << key << " not found." << endl;
  }
}
