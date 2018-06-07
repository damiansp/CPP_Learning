/* shapeTest.cpp */
// Driver for shpare hierarchy in shapes dir
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::ios;
using std::setiosflags;
using std::setprecision;

#include "shape.hpp"
#include "point1.hpp"
#include "circle1.hpp"
#include "cylinder1.hpp"

// Make virtual function calls off a base-class pointer using dynamic binding
void virtualViaPointer(const Shape* baseClassPtr) {
  baseClassPtr -> printShapeName();
  baseClassPtr -> print();
  cout << "\nArea = " << baseClassPtr -> area()
       << "\nVolume = " << baseClassPtr -> volume() << "\n\n";
}

// Make virtual function calls off a base-class reference using dynamic binding
void virtualViaReference(const Shape& baseClassRef) {
  baseClassRef.printShapeName();
  baseClassRef.print();
  cout << "\nArea = " << baseClassRef.area()
       << "\nVolume = " << baseClassRef.volume() << "\n\n";
}

int main() {
  cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);

  Point point(11, 3);
  Circle circle(19.76, 3, 13);
  Cylinder cylinder(19, 8.0, 8, 5);

  point.printShapeName();
  point.print();
  cout << endl;

  circle.printShapeName();
  circle.print();
  cout << endl;

  cylinder.printShapeName();
  cylinder.print();
  cout << endl;

  // Array of base-class pointers
  Shape* arrayOfShapes[3];
  arrayOfShapes[0] = &point;
  arrayOfShapes[1] = &circle;
  arrayOfShapes[2] = &cylinder;

  // Loop through arrayOfShapes and call virtualViaPointer to print the shape
  // name, attributes, area, and volume of each using dynamic binding; repeat
  // with virtualViaReference
  cout << "Virtual function calls made off base-class pointers\n";

  for (int i = 0; i < 3; i++) {
    virtualViaPointer(arrayOfShapes[i]);
  }

  cout << "Virtual function calls made of base-class references\n";
  for (int i = 0; i < 3; i++) {
    virtualViaReference(*arrayOfShapes[i]);
  }
  
  return 0;
}
