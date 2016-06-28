/* hourly.h */
// HourlyWorker class def
#ifndef HOURLY_H
#define HOURLY_H

#include "employee.h"

class HourlyWorker : public Employee {
 public:
  // Constructor
  HourlyWorker(const char*, const char*, double, double);

  // Accessor
  double getPay() const;

  // Print
  void print() const;
  
 private:
  double wage, hours;
};

#endif
