#include <iomanip>
#include <iostream>

using namespace std;


int main() {
  int total{0};
  int gradeCounter{0};
  int aCount{0};
  int bCount{0};
  int cCount{0};
  int dCount{0};
  int fCount{0};
  int grade;
  
  cout << "Enter grades (Ctrl-d to quit)\n";
  while (cin >> grade) {
    total += grade;
    gradeCounter++;
    switch (grade / 10) {
    case 10:
    case 9:
      ++aCount; break;
    case 8:
      ++bCount; break;
    case 7:
      ++cCount; break;
    case 6:
      ++dCount; break;
    default:
      ++fCount; break;
    }
  }
  cout << fixed << setprecision(2);
  cout << "\nGrade Report:\n";
  if (gradeCounter != 0) {
    double avg = static_cast<double>(total) / gradeCounter;
    cout << "Class average is " << avg << "\nNumber each grade:"
         << "\nA: " << aCount << "\nB: " << bCount << "\nC: " << cCount
         << "\nD: " << dCount << "\nF: " << fCount << endl;
  } else cout << "No grades entered."  << endl;
  return 0;
}
