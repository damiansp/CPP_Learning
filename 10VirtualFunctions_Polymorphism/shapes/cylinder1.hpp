/* cylinder1.hpp */
// Cylinder class def
#ifndef CYLINDER_HPP
#define CYLINDER_HPP

#include "circle1.hpp"

class Cylinder : public Circle {
public:
  // Constr
  Cylinder(double h = 0.0, double r = 0.0, int x = 0, int y = 0);

  // Acc
  void setHeight(double);
  double getHeight();

  // Print
  virtual void printShapeName() const { cout << "Cylinder: "; }
  virtual void print() const;

  virtual double area() const;
  virtual double volume() const;

private:
  double height;                                                
};

#endif
