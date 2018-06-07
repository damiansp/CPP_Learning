/* boss2.hpp */
// Boss class derived from Employee
#ifndef BOSS2_HPP
#define BOSS2_HPP

#include "employee2.hpp"

class Boss : public Employee {
public:
  // Constr
  Boss(const char*, const char*, double = 0.0);

  // Acc
  void setWeeklySalary(double);

  // Print
  virtual void print() const;

  // Other
  virtual double earnings() const;

private:
  double weeklySalary;
};

#endif
