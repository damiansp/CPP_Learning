#include "Cube.h"
#include "Shape.h"



namespace dsp {
  Shape::Shape(): Shape(1) { /* nothing */ }

  Shape::Shape(double width): width_(width) { /* nothing */ }

  double Shape::getWidth() const { return width_; }
  
  
  Cube::Cube(double width, char color): Shape(width) { color_ = color; }

  double Cube::getVolume() const {
    // Cannot access Shape::width_ bc is private
    return getWidth() * getWidth() * getWidth();
  }
}
