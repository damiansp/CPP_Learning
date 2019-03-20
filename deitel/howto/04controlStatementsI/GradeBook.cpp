#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h"


GradeBook::GradeBook(string name) { setCourseName(name); }


void GradeBook::setCourseName(string name) {
  if (name.length() <= 25) { courseName = name; }
  else {
    courseName = name.substr(0, 25);
    cout << "Name \"" << name << "\" exceeded max length (25). Truncating...\n"
         << endl;
  }
}


string GradeBook::getCourseName() {
  return courseName;
}


void GradeBook::displayMessage() {
  cout << "Welcome to the grade book for\n" << getCourseName() << "!\n" << endl;
}


void GradeBook::determineClassAverage() {
  int total = 0;
  int gradeCounter = 1;
  int grade;
  int average;

  while (gradeCounter <= 10) {
    cout << "Enter grade: ";
    cin >> grade;
    total += grade;
    gradeCounter++;
  }

  average = total / 10;
  cout << "\nTotal of all 10 grades is " << total << endl;
  cout << "Average: " << average << endl;
}
