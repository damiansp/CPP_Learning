/* Using * and & opeartors */
#include <iostream>
using std::cout;
using std::endl;

int main() {
  int a;
  int *aPtr;

  a = 7;
  aPtr = &a;

  cout << "Address of a: " << &a
       << "\nValue of aPtr: " << aPtr;

  cout << "\n\nValue of a: " << a
       << "\nValue of *aPtr: " << *aPtr;

  cout << "\n\nShowing that * and & are inverse operators:"
       << "\n&*aPtr = " << &*aPtr << "\n*&aPtr = " << *&aPtr << endl;
  
  return 0;
}
