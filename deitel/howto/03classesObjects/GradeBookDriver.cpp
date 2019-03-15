#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h"


int main() {
  GradeBook gb1("CS101: Introduction to Python Programming");
  GradeBook gb2("CS102: Data Structures");

  cout << "GradeBook 1 created for course: " << gb1.getCourseName()
       << "\nGradeBook 2 created for course: " << gb2.getCourseName() << endl;
  return 0;
}
