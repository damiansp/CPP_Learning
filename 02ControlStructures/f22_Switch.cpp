// Counting letter grades with a switch
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  int grade,
      as = 0,
      bs = 0,
      cs = 0,
      ds = 0,
      fs = 0;

  cout << "Enter the letter grades (EOF to end input): " << endl;

  while ((grade = cin.get()) != EOF) {
    switch (grade) {
      case 'A':
      case 'a':
        ++as;
        break;

      case 'B':
      case 'b':
        ++bs;
        break;

      case 'C':
      case 'c':
        ++cs;
        break;

      case 'D':
      case 'd':
        ++ds;
        break;

      case 'F':
      case 'f':
        ++fs;
        break;

      case '\n':
      case '\t':
      case ' ':
        break;

      default:
        cout << "Invalid letter grade entered. Try again." << endl;
    }
  }

  cout << "\n\nTotals for each grade are: "
       << "\nA: " << as << "\nB: " << bs << "\nC: " << cs
       << "\nD: " << ds << "\nF: " << fs << endl;

  return 0;
}
