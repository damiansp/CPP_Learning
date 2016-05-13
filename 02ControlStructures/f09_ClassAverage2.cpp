// Class average program with sentinel controlled repetition
#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ios;

#include <iomanip>

using std::setprecision;
using std::setiosflags;

int main() {
  int total,
      gradeCounter,
      grade;
  double average;

  // init
  total = 0;
  gradeCounter = 0;

  // proc
  cout << "Enter grade or -1 to end: ";
  cin >> grade;

  while (grade != -1) {
    total += grade;
    gradeCounter++;
    cout << "Enter next grade or -1 to end: ";
    cin >> grade;
  }

  // term
  if (gradeCounter != 0) {
    average = static_cast<double>(total) / gradeCounter;
    cout << "Class average is " << setprecision(2)
         << setiosflags(ios::fixed | ios::showpoint)
         << average << endl;
  } else {
    cout << "No grades were entered" << endl;
  }

  return 0;
}
