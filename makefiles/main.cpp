#include <iostream>
#include "Point.h"
#include "Rectangle.h"


int main() {
  int x, y;

  cout << "Enter x, y values for point p1: ";
  cin >> x >> y;
  Point  p1(x, y);

  p1.move(3, 5);
  cout << "\nMoved p1 by (3, 5)\np1 now at (" << p1.getX() << ", " << p1.getY()
       << ")" << endl;
  cout << "\nUsing p1 as bottom left point of rectangle r1.\n"
       << "Enter x, y values for top right corner: ";
  cin >> x >> y;
  Point p2(x, y);
  Rectangle r1(p1, p2);

  cout << "\nRectangle r1 has area: " << r1.getArea();
  return 0;
}
