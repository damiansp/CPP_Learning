#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"


GradeBook::GradeBook(string name) { setCourseName(name); }


void GradeBook::setCourseName(string name) {
  if (name.length() <= 25) courseName = name;
  if (name.length() > 25) {
    courseName = name.substr(0, 25);
    cout << "Name \"" << name << "\" exceeds max length (25)\n"
         << "Truncating to 25 characters.\n" << endl;
  }
}


string GradeBook::getCourseName() { return courseName; }


void GradeBook::displayMessage() {
  cout << "Welcome to the Grade Book for\n" << getCourseName() << "!" << endl;
}
