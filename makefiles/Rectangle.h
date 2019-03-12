#ifndef _RECTANGLE_H
#define _RECTANGLE_H


class Rectangle {
 public:
  Rectangle();
  Rectangle(Point bl; Point tr);
  void move(int dx, int dy);
  Point getBottomLeft() const;
  Point getTopRight() const;
  int getWidth() const;
  int getHeight() const;
  int getArea() const;
 private:
  Point bottomLeft, topRight;
};

#endif
