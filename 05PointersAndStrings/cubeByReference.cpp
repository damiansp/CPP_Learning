/* Cube a var using call-by-ref with a pointer arg */
#include <iostream>
using std::cout;
using std::endl;

void cubeByReference(int *nPtr) {
  // Cube number in place
  *nPtr = *nPtr * *nPtr * *nPtr;
}

int main() {
  int n = 5;

  cout << "n = " << n << endl;
  cout << "Calling cubeByReference(&n)...." << endl;
  cubeByReference(&n);
  cout << "n = " << n << endl;
  
  return 0;
}
