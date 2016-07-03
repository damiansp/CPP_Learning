/* circle1.hpp */
// Circle class def
#ifndef CIRCLE1_HPP
#define CIRCLE1_HPP

#include "point1.hpp"

class Circle : public Point {
public:
  // Constr
  Circle(double r = 0.0, int x = 0, int y = 0);

  // Acc
  void setRadius(double);
  double getRadius() const;

  // Print
  virtual void printShapeName() const { cout << "Circle: "; }
  virtual void print() const;

  virtual double area() const;

private:
  double radius;
};

#endif
