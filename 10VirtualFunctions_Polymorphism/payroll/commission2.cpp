/* commission2.cpp */
// CommissionWorker class member func defs
#include <iostream>
using std::cout;

#include "commission2.hpp"

// Constr
CommissionWorker::CommissionWorker(
  const char* first, const char* last, double s, double c, int q)
  : Employee(first, last) {
  setSalary(s);
  setCommission(c);
  setQuantity(q);
}

// Acc
void CommissionWorker::setSalary(double s) {
  salary = s > 0 ? s : 0;
}

void CommissionWorker::setCommission(double c) {
  commission = c > 0 ? c : 0;
}

void CommissionWorker::setQuantity(int q) {
  quantity = q >= 0 ? q : 0;
}

// Print
void CommissionWorker::print() const {
  Employee::print();
  cout << " (Commission worker)";
}



double CommissionWorker::earnings() const {
  return salary + commission * quantity;
}
