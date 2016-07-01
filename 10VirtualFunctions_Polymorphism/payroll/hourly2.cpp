/* hourly2.cpp */
// HourlyWorker class member func defs
#include <iostream>
using std::cout;

#include "hourly2.hpp"

// Constr
HourlyWorker::HourlyWorker(
  const char* first, const char* last, double w, double h)
  : Employee(first, last) {
  setWage(w);
  setHours(h);
}

// Acc
void HourlyWorker::setWage(double w) {
  wage = w > 0 ? w : 0;
}

void HourlyWorker::setHours(double h) {
  hours = h >= 0 && h < 168 ? h : 0;
}

// Print
void HourlyWorker::print() const {
  Employee::print();
  cout << " (Houry worker)";
}



// Calculate earnings
double HourlyWorker::earnings() const {
  // no overtime
  if (hours <= 40) {
    return wage * hours;
  } else {
    // overtime at time and a half
    return 40 * wage + (hours - 40) * wage * 1.5;
  }
}
