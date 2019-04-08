#include <string>
using std::string;


class Gradebook {
 public:
  Gradebook(string);
  void setCourseName(string);
  string getCourseName();
  void displayMessage();
  void inputGrades();
  void displayGradeReport();

 private:
  string courseName;
  int as;
  int bs;
  int cs;
  int ds;
  int fs;
};
