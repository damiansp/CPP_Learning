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
    cout << "Welcome to the grad book for \n" << getCourseName() << "!" << endl;
  }
};


int main() {
  GradeBook introBook("CS101 Introduction to C++ Programming");
  GradeBook structuresBook("CS102 Data Structures in C++");
  cout << "Grade Book created for " << introBook.getCourseName()
       << "\nGrade Book created for " << structuresBook.getCourseName() << endl;
  return 0;
}

  
