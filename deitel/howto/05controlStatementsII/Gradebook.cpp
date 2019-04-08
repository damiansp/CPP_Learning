#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include "Gradebook.h"


Gradebook::Gradebook(string name) {
  setCourseName(name);
  as = 0;
  bs = 0;
  cs = 0;
  ds = 0;
  fs = 0;
}


void Gradebook::setCourseName(string name) {
  if (name.length() <= 25) { courseName = name; }
  else {
    courseName = name.substr(0, 25);
    cout << "Name \"" << name << "truncated to 25 chars." << endl;
  }
}


string Gradebook::getCourseName() { return courseName; }


void Gradebook::displayMessage() {
  cout << "Welcome to the Grade Book for\n" << getCourseName() << "!\n" << endl;
}


void Gradebook::inputGrades() {
  int grade;

  cout << "Enter the letter grades." << endl << "(EOF to end)" << endl;
  while ((grade = cin.get()) != EOF) {
    switch (grade) {
    case 'A':
    case 'a':
      as++; break;
    case 'B':
    case 'b':
      bs++; break;
    case 'C':
    case 'c':
      cs++; break;
    case 'D':
    case 'd':
      ds++; break;
    case 'F':
    case 'f':
      fs++; break;
    case '\n':
    case '\t':
    case ' ':
      break;
    default:
      cout << "Bad entry. Ignoring.  Enter new grade." << endl; break;
    }
  }
}


void Gradebook::displayGradeReport() {
  cout << "\n\nNumber of each grade:"
       << "\nA: " << as
       << "\nB: " << bs
       << "\nC: " << cs
       << "\nD: " << ds
       << "\nF: " << fs
       << endl;
}
