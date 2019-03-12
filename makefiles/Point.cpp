#include "Point.h"


Point::Point() {
  x = 0;
  y = 0;
}


Point::Point(int xVal, int yVal) {
  x = xVal;
  y = yVal;
}


void Point::move(int dx, int dy) {
  x += dx;
  y += dy;
}


int Point::get_x() const { return x; }


int Point::get_y() const { return y; }
