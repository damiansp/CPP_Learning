#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;


class GradeBook {
private:
  string courseName;
  
public:
  GradeBook(string name) { setCourseName(name); }
  void setCourseName(string name) { courseName = name; }
  string getCourseName() { return courseName; }
  
  void displayMessage() {
    cout << "Welcome to the Grade Book for\n" << getCourseName() << "!" << endl;
  }
};


int main() {
  GradeBook gb1("CS101 Python Programming");
  GradeBook gb2("CS102 Data Structures");

  cout << "gb1 created for: " << gb1.getCourseName()
       << "\ngb2 created for: " << gb2.getCourseName() << endl;
  return 0;
}
