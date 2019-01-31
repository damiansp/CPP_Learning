/* cylinder2.cpp */
// Member and friend funcs for Cylinder class (cylinder2)
#include "cylinder2.h"

#define PI 3.141592654

// Constructor
Cylinder::Cylinder(double h, double r, int x, int y)
  : Circle(r, x, y) {
  setHeight(h);
}

// Accessors
void Cylinder::setHeight(double h) {
  height = (h >= 0 ? h : 0);
}

double Cylinder::getHeight() const { return height; }

// Operator overloads
ostream& operator<<(ostream& output, const Cylinder& c) {
  output << static_cast<Circle>(c) << "; height: " << c.height;

  return output;
}


double Cylinder::area() const {
  return 2 * Circle::area() + 2 * PI * radius * height;
}

double Cylinder::volume() const { return Circle::area() * height; }

