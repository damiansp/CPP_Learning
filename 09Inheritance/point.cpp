/* point.cpp */
// Point class member funcs
#include <iostream>
#include "point.h"

// Constructor
Point::Point(int a, int b) { setPoint(a, b); }

// Accessors
void Point::setPoint(int a, int b) {
  x = a;
  y = b;
}

// Operator overloads
ostream& operator<<(ostream& output, const Point& p) {
  output << '(' << p.x << ", " << p.y << ')';

  return output;
}
