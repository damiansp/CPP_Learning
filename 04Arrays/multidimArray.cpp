/* Initializing a multidimensional array */
#include <iostream>
using std::cout;
using std::endl;

void printArray(int a[][3]) {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
      cout << a[i][j] << ' ';
    }

    cout << endl;
  }
}



int main() {
  int a1[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int a2[2][3] = {1, 2, 3, 4, 5, 6};
  int a3[2][3] = {{1}, {1, 2}};

  cout << "Array 1 by row: " << endl;
  printArray(a1);
  cout << endl;

  cout << "Array 2 by row: " << endl;
  printArray(a2);
  cout << endl;

  cout << "Array 3 by row: " << endl;
  printArray(a3);
  cout << endl;

  
  return 0;
}
