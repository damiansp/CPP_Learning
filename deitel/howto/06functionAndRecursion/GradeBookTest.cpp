#include "GradeBook.h"


int main() {
  GradeBook gBook("CS101: C++ Programming");

  gBook.displayMessage();
  gBook.inputGrades();
  gBook.displayGradeReport();
  return 0;
}
