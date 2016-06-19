/* interfaceTest.cpp */
// Hide Implementation's private data with a proxy class (Interface)
#include <iostream>
using std::cout;
using std::endl;

#include "interface.h"

int main() {
  Interface i(5);

  cout << "Interface contains: " << i.getValue() << " before setValue(10)\n";

  i.setValue(10);
  cout << "Interface contains: " << i.getValue() << " after setValue(10)\n";
  
  return 0;
}
