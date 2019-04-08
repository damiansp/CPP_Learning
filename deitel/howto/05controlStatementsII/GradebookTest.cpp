#include "Gradebook.h"


int main() {
  Gradebook gradeBook("CS101 C++ Programming");

  gradeBook.displayMessage();
  gradeBook.inputGrades();
  gradeBook.displayGradeReport();
  return 0;
}
