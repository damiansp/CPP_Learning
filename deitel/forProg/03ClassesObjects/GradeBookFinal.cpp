#include <iostream>
using std::cout;
using std::endl;

#include "GradeBookFinal.h"


GradeBookFinal::GradeBookFinal(string name) { setCourseName(name); }

void GradeBookFinal::setCourseName(string name) { courseName = name; }
string GradeBookFinal::getCourseName() { return courseName; }

void GradeBookFinal::displayMessage() {
  cout << "Welcome to the Grade Book for\n" << getCourseName() << "!" << endl;
}
