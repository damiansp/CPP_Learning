#include <string>
using std::string;


class GradeBookFinal {
 private:
  string courseName;
  
 public:
  GradeBookFinal(string);
  void setCourseName(string);
  string getCourseName();
  void displayMessage();
};
