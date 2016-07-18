/* anonymousUnion.cpp */
#include <iostream>
using std::cout;
using std::endl;

int main() {
  // Declare an anonymous union: b, d, fPrtr all share a single space in memory
  union {
    int b;
    double d;
    char* fPtr;
  };

  // Declare conventional local variables
  int a = 1;
  double c = 3.3;
  char* ePtr = "Anonymous";

  b = 2;
  cout << a << ' ' << b << endl;

  d = 4.4;
  cout << c << ' ' << d << endl;

  fPtr = "union";
  cout << ePtr << ' ' << fPtr << endl;
  
  return 0;
}
