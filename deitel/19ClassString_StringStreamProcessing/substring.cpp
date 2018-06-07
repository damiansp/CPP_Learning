/* substring.cpp */
// subtr function
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main() {
  string s("The airplane flew away");

  // substr(startIndex, numChars)
  cout << s.substr(7, 5) << endl;
  
  return 0;
}
