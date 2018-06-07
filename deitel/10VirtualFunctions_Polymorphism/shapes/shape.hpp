/* shape.hpp */
// Def of abstract base class Shape
#ifndef SHAPE_HPP
#define SHAPE_HPP

class Shape {
public:
  // no constructor
  
  virtual double area() const { return 0.0; }
  virtual double volume() const { return 0.0; }

  // Pure virtual funcs overridden in derived classes
  virtual void printShapeName() const = 0;
  virtual void print() const = 0;
};

#endif
