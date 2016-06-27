/* circleTest.cpp */
// Test Circle and Point classes
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
#include "point.h"
#include "circle.h"

int main() {
  Point* pointPtr = 0, p(30, 50);
  Circle* circlePtr = 0, c(2.7, 120, 89);

  cout << "Point p: " << p << "\nCircle c: " << c << '\n';

  // Treat a Circle as a Point
  pointPtr = & c;
  cout << "\nCircle c (via * pointPtr): " << * pointPtr << '\n';

  // Treat Circle as Circle
  circlePtr = static_cast<Circle*>(pointPtr);
  cout << "\nCircle c (via * circlePtr):\n" << * circlePtr
       << "\nArea of c (via circlePtr):\n" << circlePtr -> area() << '\n';

  // BAD IDEA: Treat Point as Circle
  pointPtr = & p;

  // cast base-class pointer to derived class pointer
  circlePtr = static_cast<Circle*>(pointPtr);
  cout << "\npoint p (via * circlePtr):\n" << * circlePtr
       << "\nArea of object circlPtr points to: " << circlePtr -> area()
       << endl;
  
  return 0;
}
