/* boss2.cpp */
// Boss class member func defs
#include <iostream>
using std::cout;

#include "boss2.hpp"

// Constr
Boss::Boss(const char* first, const char* last, double s)
  : Employee(first, last) {
  setWeeklySalary(s);
}

// Acc
void Boss::setWeeklySalary(double s) {
  weeklySalary = s > 0 ? s : 0;
}

// Print
void Boss::print() const {
  Employee::print();
  cout << " (Boss)";
}


double Boss::earnings() const { return weeklySalary; }
