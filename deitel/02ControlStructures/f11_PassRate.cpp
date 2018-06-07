#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  // init
  int passes = 0,
      failures = 0,
      studentCounter = 1,
      result;

  // proc 10 students
  while (studentCounter <= 10) {
    cout << "Enter result (1: pass, 2: fail): ";
    cin >> result;

    if (result == 1) {
      passes++;
    } else {
      failures++;
    }

    studentCounter++;
  }

  if (passes > 8) {
    cout << "Fine teaching.  Raise teachers' salaries." << endl;
  } else {
    cout << "Unsatisfactory. Somebody's gettin' canned." << endl;
  }

  return 0;
}
