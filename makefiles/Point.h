#ifndef _POINT_H
#define _POINT_H


class Point {
 public:
  Point();
 Point(int xVal, int yVal);
  void move(int dx, int dy);
  int getX() const;
  int getY() const;
 private:
  int x, y;
};

#endif
