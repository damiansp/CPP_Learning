#include <iostream>
using std::cout;
using std::endl;

#include "Cube.h"
using my::Cube;


bool passByValue(Cube c) {
  // logic to send...
  cout << "passing by value" << endl;
  return true;
}


bool passByReference(Cube &c) {
  // ...
  cout << "passing by reference" << endl;
  return true;
}


bool passByPointer(Cube *c) {
  // ...
  cout << "passing by pointer" << endl;
  return true;
}


double cubeOnStack() {
  Cube c(3);
  return c.getVolume();
}


void cubeOnHeap() {
  Cube* c1 = new Cube(10);
  Cube* c2 = new Cube;
  delete c1;
}


int main() {
  Cube c(10);             // create with val $1k
  Cube copyCube = c;      // transfer
  Cube &aliasCube = c;    // reference/alias
  Cube *pointerCube = &c; // pointer to mem address

  passByValue(c);
  passByReference(c);
  passByPointer(&c);

  cubeOnStack();
  cubeOnHeap();
  cubeOnStack();
  return 0;
}
