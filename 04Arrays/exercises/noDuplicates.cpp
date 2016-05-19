/* Read in 20 ints on [10, 100]; as read, if not a duplicate, print */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool isInArray(int n, int array[], int arraySize) {
  for (int i = 0; i < arraySize; i++) {
    if (array[i] == n) {
      return true;
    }
  }

  return false;
}



int main() {
  const int arraySize = 19;
  int valuesEntered[arraySize] = {0};
  int nextIndex = 0,  /* index to store next value */
    n = 0;            /* value entered by user */
  cout << "Enter 20 numbers between 10 and 100.\n"
       << "Unique values will be stored.\n\n";
  
  for (int i = 0; i < 20; i++) {
    cout << "Enter number " << i + 1 << ": ";
    cin >> n;
    if (isInArray(n, valuesEntered, arraySize)) {
      cout << n
           << " has already been entered, and will not be stored again.\n";
    } else {
      valuesEntered[nextIndex++] = n;
      cout << n << " was stored.\n";
    }
  }

  cout << "The numbers stored were: \n";
  
  for (int i = 0; i < arraySize; i++) {
    if (valuesEntered[i] != 0) {
      cout << valuesEntered[i] << " ";
    } else {
      break;
    }
  }

  cout << endl << endl;

  return 0;
}
