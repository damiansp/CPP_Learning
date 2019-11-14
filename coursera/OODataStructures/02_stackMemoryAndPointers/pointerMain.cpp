#include <iostream>
using std::cout;
using std::endl;


int main() {
  int n = 7;
  int *p = &n;

  cout << "n: " << n << endl;
  cout << "&n: " << &n << endl;
  cout << "p: " << p << endl;
  cout << "&p: " << &p << endl;
  cout << "*p: " << *p << endl;

  *p = 42;
  cout << "*p changed to 42 " << n << endl;
  cout << "n: " << n << endl;

  return 0;
}
