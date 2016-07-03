/* cylinder1.cpp */
// Cylinder class member func defs
#include <iostream>
using std::cout;

#include "cylinder1.hpp"

#define PI 3.141592654

// Constr
Cylinder::Cylinder(double h, double r, int x, int y)
  : Circle(r, x, y) {
  setHeight(h);
}

// Acc
void Cylinder::setHeight(double h) {
  height = h > 0 ? h : 0;
}

double Cylinder::getHeight() { return height; }

// Print
void Cylinder::print() const {
  Circle::print();
  cout << "; Height = " << height;
}



double Cylinder::area() const {
  return 2 * Circle::area() + 2 * PI * getRadius() * height;
}

double Cylinder::volume() const {
  return Circle::area() * height;
}
