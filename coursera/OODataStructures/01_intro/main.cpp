#include <iostream>
using std::cout;
using std::endl;

#include "Cube.h"



int main() {
  my::Cube c;

  c.setLength(2.34);
  cout << "Volume: " << c.getVolume() << endl;
  cout << "Surface Area: " << c.getSurfaceArea() << endl;
}
