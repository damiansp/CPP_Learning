#include <iostream>
using std::cout;
using std::endl;


void foo() {
  int x = 42;

  cout << " x in foo(): " << x << endl;
  cout << "&x in foo(): " << &x << endl;
}


int main() {
  int n = 7;
  
  cout << " n in main(): " << n << endl;
  cout << "&n in main(): " << &n << endl;
  foo();

  return 0;
}
