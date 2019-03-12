#include "Rectangle.h"


Rectangle::Rectangle() { ; } // Do nothing--points will initialize selves


Rectangle::Rectangle(Point bl, point tr) {
  bottomLeft = bl;
  topRight = tr;
}


void Rectangle::move(int dx, int dy) {
  bottomLeft.move(dx, dy);
  topRight.move(dx, dy);
}


Point Rectangle::getTopRight() const { return topRight; }


Point Rectangle::getBottomLeft() const { return bottomLeft; }


int Rectangle::getWidth() const { return topRight.getX() - bottomLeft.getX(); }


int Rectangle::getHeight() const { return topRight.getY() - bottomLeft.getY(); }


int Rectangle::getArea() const { return getWidth() * getHeight(); }
