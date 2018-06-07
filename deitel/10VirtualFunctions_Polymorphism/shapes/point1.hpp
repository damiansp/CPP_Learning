/* point1.hpp */
// Point class def
#ifndef POINT1_HPP
#define POINT1_HPP

#include <iostream>
using std::cout;

#include "shape.hpp"

class Point : public Shape {
public:
  // Constr
  Point(int = 0, int = 0);

  // Acc
  int getX() const { return x; }
  int getY() const { return y; }

  // Print
  virtual void printShapeName() const { cout << "Point: "; }
  virtual void print() const;
  
  void setPoint(int, int);
  
private:
  int x, y;                                                
};

#endif
