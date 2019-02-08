#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;
using std::getline;


class GradeBook {
public:
  void displayMessage(string courseName) {
    cout << "Welcome to the grade book for\n  " << courseName << "!" << endl;
  }
}; // <- occhio!


int main() {
  string courseName;
  GradeBook gbook;
  cout << "Name of course:" << endl;
  getline(cin, courseName);
  cout << endl;
  gbook.displayMessage(courseName);
  return 0;
}
