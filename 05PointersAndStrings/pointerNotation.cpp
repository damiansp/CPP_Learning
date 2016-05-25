/* Using subscripting and pointer notation w arrays */
#include <iostream>
using std::cout;
using std::endl;

int main() {
  int b[] = {10, 20, 30, 40};
  int i, offset;
  int *bPtr = b;

  /* subscripting */
  for (i = 0; i < 4; i++) {
    cout << "b[" << i << "] = " << b[i] << '\n';
  }

  /* pointer/offset (array name as pointer) */
  for (offset = 0; offset < 4; offset++) {
    cout << "*(b + " << offset << ") = " << *(b + offset) << '\n';
  }

  /* pointer/subscript */
  for (i = 0; i < 4; i++) {
    cout << "bPtr[" << i << "] = " << bPtr[i] << '\n';
  }

  /* pointer/offset (pointer as pointer) */
  for (offset = 0; offset < 4; offset++) {
    cout << "*(bPtr + " << offset << ") = " << *(bPtr + offset) << endl;
  }
  
  return 0;
}
