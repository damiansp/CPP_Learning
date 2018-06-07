/* piece2.cpp */
// PieceWorker class member func defs
#include <iostream>
using std::cout;

#include "piece2.hpp"

// Constr
PieceWorker::PieceWorker(const char* first, const char* last, double w, int q)
  : Employee(first, last) {
  setWage(w);
  setQuantity(q);
}

// Acc
void PieceWorker::setWage(double w) {
  wagePerPiece = w > 0 ? w : 0;
}

void PieceWorker::setQuantity(int q) {
  quantity = q > 0 ? q : 0;
}

// Print
void PieceWorker::print() const {
  Employee::print();
  cout << " (Piece worker)";
}



// Calculate earnings
double PieceWorker::earnings() const {
  return quantity * wagePerPiece;
}
