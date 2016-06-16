/* employeeTest.cpp */
// Demo composition: an object with member objects
#include <iostream>
using std::cout;
using std::endl;

#include "employee1.h"

int main() {
  Employee e("Bob", "Dobolina", 7, 24, 1949, 3, 12, 1988);

  cout << '\n';
  e.print();

  cout << "\nTest Date Constructor with invalid values:\n";
  Date d(14, 35, 1994);
  cout << endl;
  
  return 0;
}
