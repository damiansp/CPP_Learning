/* iStringStream.cpp */
// Demo input form an istringstream object
#include <iostream>
using std::cout;
using std::endl;

#include <sstream>
using std::istringstream;

#include <string>
using std::string;


int main() {
  string input("Input test 123 4.5 D");
  istringstream inputString(input);
  string s1, s2;
  int i;
  double d;
  char c;

  inputString >> s1 >> s2 >> i >> d >> c;

  cout << "The following items were extracted from the istringstream:"
       << "\nstring: " << s1
       << "\nstring: " << s2
       << "\nint:    " << i
       << "\ndouble: " << d
       << "\nchar:   " << c;

  // Attempt to read from empty string
  long x;

  inputString >> x;

  if (inputString.good()) {
    cout << "\n\nlong value is: " << x << endl;
  } else {
    cout << "\n\ninputString is empty" << endl;
  }
  
  return 0;
}
