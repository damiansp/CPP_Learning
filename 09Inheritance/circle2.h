/* circle2.h */
// Circle class def
#ifndef CIRCLE2_H
#define CIRCLE2_H

#include <iostream>
using std::ostream;

#include "point2.h"

class Circle : public Point { // Inherits from Point
  friend ostream& operator<<(ostream&, const Circle&);
 public:
  // Constructor
  Circle(double r = 0.0, int x = 0, int y = 0);

  // Accessors
  void setRadius(double);
  double getRadius() const;

  // Other
  double area() const;
  
 protected:
  double radius; // x, y inherited through Point
};

#endif
