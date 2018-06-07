/* create.cpp */
// Member func defs for class CreateAndDestroy
#include <iostream>
using std::cout;
using std::endl;

#include "create.h"

// Constructor
CreateAndDestroy::CreateAndDestroy(int value) {
  data = value;
  cout << "Object " << data << "\tconstructor";
}

// Destructor
CreateAndDestroy::~CreateAndDestroy() {
  cout << "Object " << data << "\tdestructor" << endl;
}
