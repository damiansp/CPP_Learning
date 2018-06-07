/* circle.h */
// Circle class def
#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
using std::ostream;

#include <iomanip>
using std::ios;
using std::setiosflags;
using std::setprecision;

#include "point.h"

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
