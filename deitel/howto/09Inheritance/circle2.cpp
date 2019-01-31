/* circle2.cpp */
// Class Circle member funcs
#include <iomanip>
using std::ios;
using std::setiosflags;
using std::setprecision;

#include "circle2.h"

#define PI 3.141592654

// Constructor
Circle::Circle(double r, int a, int b)
  : Point(a, b) { // call base-class, Point, constructor
  setRadius(r);
}

// Accessors
void Circle::setRadius(double r) {
  radius = (r >= 0 ? r : 0);
}

double Circle::getRadius() const { return radius; }

// Operator overloads
ostream& operator<<(ostream& output, const Circle& c) {
  output << "Center: " << static_cast<Point>(c) << "; Radius: "
         << setiosflags(ios::fixed | ios::showpoint) << setprecision(2)
         << c.radius;

  return output;
}



double Circle::area() const { return PI * radius * radius; }
