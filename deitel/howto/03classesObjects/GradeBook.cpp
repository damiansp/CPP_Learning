#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;


class GradeBook {
public:
  void displayMessage(string courseName) {
    cout << "Welcome to the Grade Book for\n" << courseName << "!" << endl;
  }
};


int main() {
  string courseName;
  GradeBook myGradeBook;

  cout << "Name of course: " << endl;
  getline(cin, courseName);
  myGradeBook.displayMessage(courseName);
  return 0;
}
