/* Function def with no params */
#include <iostream>
using std::cout;
using std::endl;

// Proto
void function1();
void function2(void);

// Defs
void function1() {
  cout << "function1 takes no parameters" << endl;
}

void function2(void) {
  cout << "function 2 doesn't take any parameters either" << endl;
}



int main() {
  function1();
  function2();

  return 0;
}
