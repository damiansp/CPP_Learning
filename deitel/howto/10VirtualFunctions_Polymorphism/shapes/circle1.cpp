/* circle1.cpp */
// Circle class member funcs
#include <iostream>
using std::cout;

#include "circle1.hpp"

#define PI 3.141592654

// Constr
Circle::Circle(double r, int a, int b)
  : Point(a, b) {
  setRadius(r);
}

// Acc
void Circle::setRadius(double r) {
  radius = r > 0 ? r : 0;
}

double Circle::getRadius() const { return radius; }

// Print
void Circle::print() const {
  Point::print();
  cout << "; Radius = " << radius;
}



double Circle::area() const {
  return PI * radius * radius;
}
