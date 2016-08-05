/* classMemeberPointers.cpp */
// using .* and ->* operators
#include <iostream>
using std::cout;
using std::endl;

class Test {
public:
  void function() { cout << "function\n"; }
  int value;
};

void arrowStar(Test* tPtr) {
  void (Test::*memPtr)() = &Test::function;
  (tPtr->*memPtr)(); // invoke function indirectly
}

void dotStar(Test* tPtr) {
  int Test::*vPtr = &Test::value;
  cout << (*tPtr).*vPtr << endl; // access value
}



int main() {
  Test t;

  t.value = 8;
  arrowStar(&t);
  dotStar(&t);

  return 0;
}
