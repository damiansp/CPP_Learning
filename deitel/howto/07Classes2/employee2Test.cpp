/* employee2test.cpp */
// Test Employee class in employee2.cpp
#include <iostream>
using std::cout;
using std::endl;

#include "employee2.h"

int main() {
  cout << "Number of employees at program start: " << Employee::getCount() << endl;

  Employee *e1Ptr = new Employee("Jose", "Cuervo");
  Employee *e2Ptr = new Employee("Joe", "Crow");

  cout << "Number of employee after instantiation: " << e1Ptr -> getCount();

  cout << "\n\nEmployee 1: " << e1Ptr -> getFirstName() << " "
       << e1Ptr -> getLastName()
       << "\n\nEmployee 2: " << e2Ptr -> getFirstName() << " "
       << e2Ptr -> getLastName() << "\n\n";

  // free memory
  delete e1Ptr;
  e1Ptr = 0;
  delete e2Ptr;
  e2Ptr = 0;

  cout << "Number of employees after deletion: " << Employee::getCount() << endl;

  return 0;
}
