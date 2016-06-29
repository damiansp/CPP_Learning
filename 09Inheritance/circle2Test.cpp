/* circle2Test.cpp */
// Driver for Circle class (circle2/point2)
#include <iostream>
using std::cout;
using std::endl;

#include "point2.h"
#include "circle2.h"

int main() {
  Circle c(1.23, 19, 76);

  cout << "x-coordinate: " << c.getX()
       << "\ny-coordinate: " << c.getY()
       << "\nradius: "  << c.getRadius();

  c.setRadius(4.10);
  c.setPoint(11, 3);
  cout << "\n\nThe new center and radius of c are:\n" << c
       << "\nArea: " << c.area() << '\n';

  Point& pRef = c;
  cout << "\nCircle printed as a Point: " << pRef << endl;
  
  return 0;
}
