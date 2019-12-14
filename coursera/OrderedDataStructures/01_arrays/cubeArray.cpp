#include <iostream>
using std::cout;
using std::endl;

#include "../Cube.h"
using uiuc::Cube;


int main() {
  Cube cubes[3] = {Cube(2), Cube(4), Cube(8)};
  int offset = (long) &(cubes[2]) - (long) &(cubes[0]);

  cout << "sizeof(Cube)" << sizeof(Cube) << endl;
  cout << "offset between ind [2] and [0]: " << offset << endl;

  return 0;
}
