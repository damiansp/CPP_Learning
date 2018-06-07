/* point2Test.cpp */
// Driver for Point (point2) class
#include <iostream>
using std::cout;
using std::endl;

#include "point2.h"

int main() {
  Point p(11, 3);

  // Point's protected data (x, y) inaccessible to main
  cout << "x coordinate is " << p.getX()
       << "\ny coordinate is " << p.getY();

  p.setPoint(10, 10);
  cout << "\n\nAfter p.setPoint(10, 10), the new location of p is "
       << p << endl;

  return 0;
}
