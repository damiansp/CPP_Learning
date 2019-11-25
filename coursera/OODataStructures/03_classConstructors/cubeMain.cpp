#include <iostream>
using std::cout;
using std::endl;

#include "Cube.h"
using my::Cube;


void foo(Cube cube) { cout << "foo()" << endl; }


Cube bar() {
  cout << "bar()" << endl;
  Cube c;
  return c;
}


int main() {
  Cube unitCube;
  Cube cube7(7);
  Cube c = bar();
  Cube myCube = c;
  Cube yourCube;
  yourCube = c; // No output

  foo(unitCube);
  cout << "Volume of unit cube: " << unitCube.getVolume() << endl;
  cout << "Volume of cube-7: " << cube7.getVolume() << endl;
  return 0;
}
