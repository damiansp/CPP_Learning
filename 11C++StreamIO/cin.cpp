/* cin.cpp */
// Working with the input stream
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int x, y;

  cout << "Enter two integers: ";
  cin >> x >> y;
  cout << "Their sum is " << x + y << endl;
  cout << x << (x == y ? " is" : " is not") << " equal to " << y << endl;

  // Using EOF to terminate input
  int grade,
    highestGrade = -1;

  cout << "Enter grade (or EOF to end): ";
  while (cin >> grade) {
    if (grade > highestGrade) {
      highestGrade = grade;
    }

    cout << "Enter grade (or EOF to end): ";
  }

  cout << "\n\nHighest Grade: " << highestGrade << endl;
  
  return 0;
}
