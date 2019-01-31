/* Assign grades based on points */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

char assignGrade(int grade) {
  if (grade > 100 | grade < 0) {
    cout << "invalid grade" << endl;
    return 1;
  } else if (grade < 60) {
    return 'F';
  } else if (grade < 70) {
    return 'D';
  } else if (grade < 80) {
    return 'C';
  } else if (grade < 90) {
    return 'B';
  } else {
    return 'A';
  }
}



int main() {
  int score;
  
  cout << "Enter total score: ";
  cin >> score;

  cout << "Grade: " << assignGrade(score) << endl;

  return 0;
}
