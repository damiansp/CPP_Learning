/* employee2.cpp */
// Member func defs for abstract base class Employee
// NOTE: not def given for pure virtual functions
#include <iostream>
using std::cout;

#include <cstring>
#include <cassert>
#include "employee2.hpp"

// Constr
Employee::Employee(const char* first, const char* last) {
  firstName = new char[strlen(first) + 1];
  assert(firstName != 0);
  strcpy(firstName, first);

  lastName = new char[strlen(last) + 1];
  assert(lastName != 0);
  strcpy(lastName, last);
}

// Destr
Employee::~Employee() {
  delete [] firstName;
  delete [] lastName;
}

// Acc
const char* Employee::getFirstName() const { return firstName; }
const char* Employee::getLastName() const { return lastName; }

// Print
void Employee::print() const {
  cout << firstName << ' ' << lastName;
}
