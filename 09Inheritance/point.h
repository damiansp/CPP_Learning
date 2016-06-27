/* point.h */
// Point class def; a 2D point with Cartesian coordinates
#ifndef POINT_H
#define POINT_H

#include <iostream>
using std::ostream;

class Point {
  friend ostream& operator<<(ostream&, const Point&);

 public:
  // Constructor
  Point(int = 0, int = 0);

  // Accessors
  void setPoint(int, int);
  int getX() const { return x; }
  int getY() const { return y; }

 protected: // accessible by derived classes
  int x, y;
};

#endif
