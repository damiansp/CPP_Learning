/* time4test.cpp */
// Demo of public member func that returns a ref to a private data member
// BAD PRACTICE
#include <iostream>
using std::cout;
using std::endl;

#include "time4.h"

int main() {
  Time t;
  int &hourRef = t.badSetHour(20);

  cout << "Hour before modification: " << hourRef;
  hourRef = 30; // modify with invalid value
  cout << "\nHour after modification: " << t.getHour();

  // Dangerous: func call that returns a ref can be used as an lvalue
  t.badSetHour(12) = 74;
  cout << "\n\n***************************\n"
       << "BAD PRACTICE!\n"
       << "badSetHour as an lvalue, Hour: " << t.getHour() << endl
       << "***************************" << endl;

  return 0;
}
