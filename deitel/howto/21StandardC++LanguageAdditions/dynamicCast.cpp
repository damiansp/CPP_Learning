/* dynamicCast.cpp */
// dynamic_cast demo
#include <iostream>
using std::cout;
using std::endl;

const double PI = 3.141592654;


class Shape {
public:
  virtual double area() const { return 0.0; }
};


class Circle : public Shape {
public:
  // Constr
  Circle(int r = 1) { radius = r; }

  virtual double area() const {
    return PI * radius * radius;
  }

protected:
  int radius;
};


class Cylinder : public Circle {
public:
  // Constr
  Cylinder(int h = 1) { height = h; }

  virtual double area() const {
    return 2 * PI * radius * height + 2 * Circle::area();
  }

private:
  int height;
};


void outputArea(const Shape* shapePtr) {
  const Circle* circlePtr;
  const Cylinder* cylinderPtr;

  // Cast Shape* to a Cylinder*
  cylinderPtr = dynamic_cast<const Cylinder*>(shapePtr);

  if (cylinderPtr != 0) {
    cout << "Cylinder's area: " << shapePtr->area();
  } else {
    // shapePtr does not refer to a cylinder; cast to a Circle*
    circlePtr = dynamic_cast<const Circle*>(shapePtr);

    if (circlePtr != 0) {
      cout << "Circle's area: " << circlePtr->area();
    } else {
      cout << "Shape is not a circle or a cylinder";
    }
  }

  cout << endl;
}



int main() {
  Circle circle;
  Cylinder cylinder;
  Shape* ptr = 0;

  outputArea(&circle);
  outputArea(&cylinder);
  outputArea(ptr);

  return 0;
}
