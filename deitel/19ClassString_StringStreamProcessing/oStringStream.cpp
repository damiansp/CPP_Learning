/* oStringStream.cpp */
// Use a dynamically allocated ostringstream object
#include <iostream>
using std::cout;
using std::endl;

#include <sstream>
using std::ostringstream;

#include <string>
using std::string;

int main() {
  ostringstream outputString;
  string s1("Output of several data types "),
    s2("to an ostring object:"),
    s3("\ndouble:         "),
    s4("\nint:            "),
    s5("\naddress of int: ");
  double d = 123.456;
  int i = 78;

  outputString << s1 << s2 << s3 << d << s4 << i << s5 << &i;
  cout << "outpuString contains:\n" << outputString.str();

  outputString << "\n...more characters added...";
  cout << "\n\nafter additional stream insertions,\n"
       << "outputString contains:\n" << outputString.str() << endl;
  
  return 0;
}
