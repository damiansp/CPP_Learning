/* namespace.cpp */
#include <iostream>
using namespace std;

int myInt = 98;

namespace Example {
  const double PI = 3.141592654;
  const double E  = 2.71828;
  int myInt = 8;

  void printValues();

  namespace Inner {
    enum Years { FISCAL1 = 1990, FISCAL2, FISCAL3 };
  }
}

namespace {
  double d = 88.22;
}


void Example::printValues() {
  cout << "\nIn printValues:\nmyInt = " << myInt
       << "\nPI = " << PI
       << "\nE = " << E
       << "\nd = " << d
       << "\n(global) myInt = " << ::myInt
       << "\nFISCAL3 = " << Inner::FISCAL3 << endl;
}

int main() {
  // Unnamed namespace
  cout << "d: " << d;

  // Global
  cout << "\n(global) myInt: " << myInt;

  // Example
  cout << "\nPI: " << Example::PI
       << "\nE: " << Example::E
       << "\nmyInt: " << Example::myInt
       << "\nFISCAL3: " << Example::Inner::FISCAL3 << endl;

  cout << "Example::printValues()\n";
  Example::printValues();
  
  return 0;
}
