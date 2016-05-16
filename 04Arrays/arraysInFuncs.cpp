/* passing arrays and array elements to functions */
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

// b points to the original array "a" in memory
void modifyArray(int b[], int sizeOfArray) {
  for (int j = 0; j < sizeOfArray; j++) {
    b[j] *= 2;
  }
}

// "e" is a local copy of array element a[3] passed from main
void modifyElement(int e) {
  cout << "Value in modifyElement is " << (e *= 2) << endl;
}

// This function cannot be used as it requires a change of a const array
/*
  void tryToModify(const int b[]) {
    b[0] /= 2; // error
  }
*/


int main() {
  const int arraySize = 5;
  int a[arraySize] = {0, 1, 2, 3, 4};

  cout << "Effects of passing entire array call-by-reference:"
       << "\n\nThe values of the original array are:\n";

  for (int i = 0; i < arraySize; i++) {
    cout << setw(3) << a[i];
  }

  cout << endl;


  // array "a" passed call-by-reference
  modifyArray(a, arraySize);

  cout << "The values of the modified array are:\n";

  for (int i = 0; i < arraySize; i++) {
    cout << setw(3) << a[i];
  }

  cout << "\n\n\nEffects of passing array element call-by-value:\n"
       << "\nThe value of a[3] is: " << a[3] << endl;

  modifyElement(a[3]);

  cout << "The value of a[3] is now: " << a[3] << endl;
  
  return 0;
}
