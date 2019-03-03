#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;


class GradeBook {
private:
  string courseName;
  
public:
  void setCourseName(string name) { courseName = name; }
  string getCourseName() { return courseName; }
  
  void displayMessage() {
    cout << "Welcome to the Grade Book for\n" << getCourseName() << "!" << endl;
  }
};


int main() {
  string courseName;
  GradeBook myGradeBook;

  cout << "Name of course: " << endl;
  getline(cin, courseName);
  myGradeBook.setCourseName(courseName);
  cout << endl;
  myGradeBook.displayMessage();
  return 0;
}
