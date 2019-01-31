/* point1.cpp */
// Class Point member func defs
#include "point1.hpp"

// Constr
Point::Point(int a, int b) { setPoint(a, b); }

void Point::setPoint(int a, int b) {
  x = a;
  y = b;
}

// Print (note no "virtual" in def)
void Point::print() const {
  cout << '(' << x << ", " << y << ')';
}
