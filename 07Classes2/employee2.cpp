/* employee2.cpp */
// Member func defs for Employee class
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
#include <cassert>
#include "employee2.h"

// Initialize static data member
int Employee::count = 0;

// Define static member func that returns no. objs instantiated
int Employee::getCount() { return count; }


// Constructor
Employee::Employee(const char *first, const char *last) {
  firstName = new char[strlen(first) + 1];
  assert(firstName != 0); // ensure mem allocated
  strcpy(firstName, first);

  lastName = new char[strlen(last) + 1];
  assert(lastName != 0);
  strcpy(lastName, last);

  ++count;
  cout << "Employee constructor for " << firstName << ' ' << lastName
       << "called.\n";
}

// Destructor recovers memory
Employee::~Employee() {
  cout << "~Employee() called for " << firstName << ' ' << lastName << endl;
  delete [] firstName;
  delete [] lastName;
  --count;
}


// Accessors
const char *Employee::getFirstName() const { return firstName; }
const char *Employee::getLastName() const { return lastName; }
