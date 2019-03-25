#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

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
  int gradeCounter = 0;
  int grade;
  double average;

  cout << "Enter grade (-1 to quit): ";
  cin >> grade;
  while (grade != -1) {
    total += grade;
    gradeCounter++;
    cout << "Next grade (-1 to quit): ";
    cin >> grade;
  }
  if (gradeCounter > 0) {
    average = static_cast<double>(total) / gradeCounter;
    cout << "\nTotal of all 10 grades is " << total << endl;
    cout << "Average: " << average << endl;
  } else { cout << "No grades entered." << endl; }
}
