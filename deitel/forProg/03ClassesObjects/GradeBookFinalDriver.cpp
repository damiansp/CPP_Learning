#include <iostream>
using std::cout;
using std::endl;

#include "GradeBookFinal.h"


int main() {
  GradeBookFinal gb1("CS101 Intro to C++ Programming");
  GradeBookFinal gb2("CS103 Data Structures in C++");
  cout << "GradeBookFinal created for:" << gb1.getCourseName()
       << "\nGradeBookFinal created for:" << gb2.getCourseName() << endl;
  return 0;
}
