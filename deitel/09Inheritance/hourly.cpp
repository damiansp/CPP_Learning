/* hourly.cpp */
// HourlyWorker class member funcs
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::ios;
using std::setiosflags;
using std::setprecision;

#include "hourly.h"

// Constructor
HourlyWorker::HourlyWorker(
  const char* first, const char* last, double initHours, double initWage)
  : Employee(first, last) { // call base class counstructor
  hours = initHours; // not bothering to validate here...
  wage = initWage;
}

// Accessor
double HourlyWorker::getPay() const { return wage * hours; }

// Print
void HourlyWorker::print() const {
  cout << "HourlyWorker::print():\n\n";
  Employee::print();

  cout << " is an hourly worker with pay of $"
       << setiosflags(ios::fixed | ios::showpoint) << setprecision(2)
       << getPay() << endl;
}
