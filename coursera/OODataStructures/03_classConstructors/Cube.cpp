#include <iostream>
using std::cout;
using std::endl;

#include "Cube.h"



namespace my {
  Cube::Cube() {
    length_ = 1;
    cout << "Default constructor invoked: $" << getVolume() << endl;
  }

  Cube::Cube(double length) {
    length_ = length;
    cout << "Cube(length) constructor invoked" << endl;
  }

  // copy constr: (same as would-be default copy constr)
  Cube::Cube(const Cube &obj) {
    length_ = obj.length_;
    cout << "Copy constructor invoked: $" << getVolume() << endl;
  }

  // Destructor
  Cube::~Cube() { cout << "Destroyed $" << getVolume() << endl; }

  Cube & Cube::operator=(const Cube &obj) {
    length_ = obj.length_;
    cout << "Assignment operator invoked" << endl;
    cout << "Transformed $" << getVolume() << "-> $" <<  getVolume()
         << endl;
    return *this;
  }

  
  double Cube::getVolume() { return length_ * length_ * length_; }

  double Cube::getSurfaceArea() { return 6 * length_ * length_; }

  void Cube::setLength(double length) { length_ = length; }
}
