/* employee1.cpp */
// Member func defs for Employee class
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>
#include "employee1.h"
#include "date1.h"

Employee::Employee(char *fName,
                   char *lName,
                   int bMonth,
                   int bDay,
                   int bYear,
                   int hMonth,
                   int hDay,
                   int hYear)
  : birthDate(bMonth, bDay, bYear),
    hireDate(hMonth, hDay, hYear) {

  // Validate fName length and copy to firstName
  int length = strlen(fName);
  length = (length < 25 ? length : 24);
  strncpy(firstName, fName, length);
  firstName[length] = '\0';

  // Same with lName
  length = strlen(lName);
  length = (length < 25 ? length : 24);
  strncpy(lastName, lName, length);
  lastName[length] = '\0';

  cout << "Employee object constructor: " << firstName << ' ' << lastName << endl;
}

Employee::~Employee() {
  cout << "Employee object destructor: " << lastName << ", " << firstName << endl;
}

void Employee::print() const {
  cout << lastName << ", " << firstName << "\nHired: ";
  hireDate.print();
  cout << " Birth date: ";
  birthDate.print();
  cout << endl;
}
