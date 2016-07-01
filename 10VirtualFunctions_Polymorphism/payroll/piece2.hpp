/* piece2.hpp */
// PieceWorker class derived from Employee
#ifndef PIECE2_HPP
#define PIECE2_HPP

#include "employee2.hpp"

class PieceWorker : public Employee {
public:
  // Constr
  PieceWorker(const char*, const char*, double = 0.0, int = 0);

  // Acc
  void setWage(double);
  void setQuantity(int);

  // Print
  virtual void print() const;

  // ...
  virtual double earnings() const;
  
private:
  double wagePerPiece;
  int quantity;
};

#endif
