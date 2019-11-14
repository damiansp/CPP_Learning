#include <iostream>

#include "Cube.h"
using my::Cube;


Cube *CreateUnitCube() {
  Cube cube;

  cube.setLength(1);
  return &cube; /* <- this is a bad idea */
}


void someOtherFunction() {
  std::cout << "etc. etc." << std::endl;
}

int main() {
  Cube *c = CreateUnitCube();

  someOtherFunction();
  double a = c->getSurfaceArea();
  std::cout << "Surface Area: " << a << std::endl;
  double v = c->getVolume();
  std::cout << "Volume: " << v << std::endl;
  std::cout << "Wait, but why?!" << std::endl; // mem reallocated to someOtherF
  return 0;
}
