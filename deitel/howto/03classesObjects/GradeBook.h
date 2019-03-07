#include <string>
using std::string;


class GradeBook {
private:
  string courseName;  
public:
  GradeBook(string);
  void setCourseName(string);
  string getCourseName();
  void displayMessage();
};
