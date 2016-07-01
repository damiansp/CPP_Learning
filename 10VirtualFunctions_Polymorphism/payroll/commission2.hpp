/* commission2.hpp */
// CommissionWorker class derived from Employee
#ifndef COMMISSION2_HPP
#define COMMISSION2_HPP

#include "employee2.hpp"

class CommissionWorker : public Employee {
public:
  // Constr
  CommissionWorker(
    const char*, const char*, double = 0.0, double = 0.0, int = 0);

  // Acc
  void setSalary(double);
  void setCommission(double);
  void setQuantity(int);

  // Print
  virtual void print() const;

  // Other
  virtual double earnings() const;
  
private:
  double salary;
  double commission;
  int quantity;
};

#endif
