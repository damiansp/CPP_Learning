/* createTest */
// Test CreateAndDestroy class to demon contructors and destructors
// Compile with create.cpp
#include <iostream>
using std::cout;
using std::endl;

#include "create.h"

// Create a few CreateAndDestroy objects
void create(void) {
  CreateAndDestroy fifth(5);
  cout << "\t(local automatic in create()" << endl;

  static CreateAndDestroy sixth(6);
  cout << "\t(local static in create()" << endl;

  CreateAndDestroy seventh(7);
  cout << "\t(local automatic in create()" << endl;
}

CreateAndDestroy first(1); // global



int main() {
  cout << "\t(global created before main())" << endl;

  CreateAndDestroy second(2);  // local
  cout << "\t(local automatic in main())" << endl;

  static CreateAndDestroy third(3);  // local, static
  cout << "\t(local static in main())" << endl;

  create();

  CreateAndDestroy fourth(4); // local
  cout << "\t(local automatic in main())" << endl;

  return 0;
}
