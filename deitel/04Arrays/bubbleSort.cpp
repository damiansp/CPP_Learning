/* sort an array using the (not-very-efficient) bublble sort (AKA sinking sort)
 * method
 */
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
  const int arraySize = 10;
  int a[arraySize] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};
  int hold;

  cout << "Data items initially:\n";

  for (int i = 0; i < arraySize; i++) {
    cout << setw(4) << a[i];
  }

  cout << endl;

  for (int pass = 0; pass < arraySize - 1; pass++) {
    for (int i = 0; i < arraySize - 1; i++) {
      if (a[i] > a[i + 1]) {
        hold = a[i];
        a[i] = a[i + 1];
        a[i + 1] = hold;
      }       
    }
  }

  cout << "\nData items sorted: \n";

  for (int i = 0; i < arraySize; i++) {
    cout << setw(4) << a[i];
  }

  cout << endl;
  
  return 0;
}
