/* hourly2.hpp */
// HourlyWorker class def, derived from Employee
#ifndef HOURLY2_HPP
#define HOURLY2_HPP

#include "employee2.hpp"

class HourlyWorker : public Employee {
public:
  // Constr
  HourlyWorker(const char*, const char*, double = 0.0, double = 0.0);

  // Acc
  void setWage(double);
  void setHours(double);

  // Print
  virtual void print() const;

  // ...
  virtual double earnings() const;
  
private:
  double wage,
    hours;
};
  
#endif
