/* employee.cpp */
// Class Employee member funcs
#include <iostream>
using std::cout;

#include <cstring>
#include <cassert>
#include "employee.h"

// Constructor -- dynamically allocates space for first/last name, uses strcopy
// to copy into the object
Employee::Employee(const char* first, const char* last) {
  firstName = new char[strlen(first + 1)];
  assert(firstName != 0);
  strcpy(firstName, first);

  lastName = new char[strlen(last + 1)];
  assert(lastName != 0);
  strcpy(lastName, last);
}

Employee::~Employee() {
  delete [] firstName;
  delete [] lastName;
}

// Print
void Employee::print() const {
  cout << firstName << ' ' << lastName;
}
