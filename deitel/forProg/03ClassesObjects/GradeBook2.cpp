#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;
using std::getline;


class GradeBook2 {
public:
  void setCourseName(string name) { courseName = name; }

  string getCourseName() { return courseName; }

  void displayMessage() {
    cout << "Welcome to the Grade Book for\n" << getCourseName() << "!" << endl;
  }

private:
  string courseName;
};


int main() {
  string nameOfCourse;
  GradeBook2 myGradeBook;
  cout << "Initial course name is:" << myGradeBook.getCourseName() << endl;
  cout << "\nPlease enter the course name:" << endl;
  getline(cin, nameOfCourse);
  myGradeBook.setCourseName(nameOfCourse);
  cout << endl;
  myGradeBook.displayMessage();
  return 0;
}
