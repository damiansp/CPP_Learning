//* compare call-by-value and call-by-reference funcs */
#include <iostream>
using std::cout;
using std::endl;

int squareByVal(int a) {
  return a *= a;
}

void squareByRef(int &cRef) {
  cRef *= cRef;
}



int main() {
  int x = 2,
    z = 4;

  cout << "x: " << x << " --before squareByVal()\n"
       << "val returned by squareByVal(): " << squareByVal(x) << endl
       << "x: " << x << " --after squareByVal()" << endl;

  cout << "z: " << z << " --before squareByRef()\n"
       << "val returned by squareByRef() is void" << endl;

  squareByRef(z);
  cout << "z: " << z << " --after squareByRef()" << endl;
  

  return 0;
}
