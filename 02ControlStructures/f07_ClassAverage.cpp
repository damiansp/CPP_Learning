#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  int total,
    gradeCounter,
    grade,
    average;

  // Initialization
  total = 0;
  gradeCounter = 1;

  // Processing
  while (gradeCounter <= 10) {
    cout << "Enter grade: ";
    cin >> grade;
    total += grade;
    gradeCounter++;
  }

  // Termination
  average = total / 10;
  cout << "Class average is " << average << endl;

  return 0;
}
