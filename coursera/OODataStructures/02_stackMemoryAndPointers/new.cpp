#include <iostream>
using std::cout;
using std::endl;


int main() {
  int* numPtr = new int;

  cout << "*numPtr: " << *numPtr << endl;
  cout << " numPtr: " << numPtr << endl;
  cout << "&numPtr: " << &numPtr << endl;

  *numPtr = 42;
  cout << "*numPtr assigned to 42" << endl;

  cout << "*numPtr: " << *numPtr << endl;
  cout << " numPtr: " << numPtr << endl;
  cout << "&numPtr: " << &numPtr << endl;

  return 0;
}
