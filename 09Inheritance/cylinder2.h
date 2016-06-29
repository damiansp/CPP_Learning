/* cylinder2.h */
// Cylinder class def
#ifndef CYLINDER2_H
#define CYLINDER2_H

#include <iostream>
using std::ostream;

#include "circle2.h"

class Cylinder : public Circle {
  friend ostream& operator<<(ostream&, const Cylinder&);

 public:
  // Constructor
  Cylinder(double h = 0.0, double r = 0.0, int x = 0, int y = 0);

  // Accessors
  void setHeight(double);
  double getHeight() const;


  double area() const;
  double volume() const;

 protected:
  double height;
};

#endif
