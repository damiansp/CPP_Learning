#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "GradeBook.h"


GradeBook::GradeBook(string name) {
  setCourseName(name);
  maximumGrade = 0;
}


void GradeBook::setCourseName(string name) {
  if (name.length() <= 25) { courseName = name; }
  else {
    courseName = name.substr(0, 25);
    cout << "Name \"" << "\" reduced to length 25.\n" << endl;
  }
}


string GradeBook::getCourseName() { return courseName; }


void GradeBook::displayMessage() {
  cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" << endl;
}


void GradeBook::inputGrades() {
  int grade1;
  int grade2;
  int grade3;

  cout << "Enter 3 integer grades: ";
  cin >> grade1 >> grade2 >> grade3;
  maximumGrade = maximum(grade1, grade2, grade3);
}


int GradeBook::maximum(int x, int y, int z) {
  int max = x;

  if (y > max) { max = y; }
  if (z > max) { max = z; }
  return max;
}


void GradeBook::displayGradeReport() {
  cout << "Maximum grade entered was: " << maximumGrade << endl;
}
