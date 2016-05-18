/* Double subscripts for indexing 2D arrays */
#include <iostream>
using std::cout;
using std::endl;
using std::ios;

#include <iomanip>
using std::setw;
using std::setiosflags;
using std::setprecision;

const int students = 3;
const int exams = 4;

int min(int grades[][exams], int pupils, int tests) {
  int lowGrade = 100;

  for (int i = 0; i < pupils; i++) {
    for (int j = 0; j < tests; j++) {
      if (grades[i][j] < lowGrade) {
        lowGrade = grades[i][j];
      }
    }
  }

  return lowGrade;
}

int max(int grades[][exams], int pupils, int tests) {
  int highGrade = 0;

  for (int i = 0; i < pupils; i++) {
    for (int j = 0; j < tests; j++) {
      if (grades[i][j] > highGrade) {
        highGrade = grades[i][j];
      }
    }
  }

  return highGrade;
}

double average(int setOfGrades[], int tests) {
  int total = 0;

  for (int i = 0; i < tests; i++) {
    total += setOfGrades[i];
  }

  return static_cast<double>(total) / tests;
}

void printArray(int grades[][exams], int pupils, int tests) {
  cout << "                [0]  [1]  [2]  [3]";

  for (int i = 0; i < pupils; i++) {
    cout << "\nstudentGrades[" << i << "] ";

    for (int j = 0; j < tests; j++) {
      cout << setiosflags(ios::left) << setw(5) << grades[i][j];
    }
  }
}



int main() {
  int studentGrades[students][exams] = {{77, 68, 86, 73},
                                        {96, 87, 89, 78},
                                        {70, 90, 86, 81}};
  cout << "The array is:\n";
  printArray(studentGrades, students, exams);
  cout << "\n\nLowest Grade: " << min(studentGrades, students, exams)
       << "\n\nHighest Grade: " << max(studentGrades, students, exams) << endl;

  for (int person = 0; person < students; person++) {
    cout << "The average for student " << person << " is "
         << setiosflags(ios::fixed | ios::showpoint) << setprecision(2)
         << average(studentGrades[person], exams) << endl;
  }
  
  return 0;
}
