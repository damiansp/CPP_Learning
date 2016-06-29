/* cylinder2Test.cpp */
// Test Cylinder class (cylinder2, circle2, point2).cpp
#include <iostream>
using std::cout;
using std::endl;

#include "circle2.h"
#include "cylinder2.h"
#include "point2.h"

int main() {
  // Create cylinder
  Cylinder cyl(1.2, 3.4, 5, 6);

  // print attributes
  cout << "coords: (" << cyl.getX() << ", " << cyl.getY() << ")"
       << "\nr: " << cyl.getRadius() << "; h: " << cyl.getHeight()
       << endl << endl;

  // set new attributes
  cyl.setHeight(9.8);
  cyl.setRadius(7.6);
  cyl.setPoint(5, 4);
  cout << "Updated attributes: " << cyl << endl;

  // Display cyl as Point...
  Point& pRef = cyl;
  cout << "\nCylinder printed as Point:\n" << pRef << endl << endl;

  // ...and as Circle
  Circle& cRef = cyl;
  cout << "Cylinder printed as Circle:\n" << cRef
       << "\nArea: " << cRef.area() << endl;

  return 0;
}
