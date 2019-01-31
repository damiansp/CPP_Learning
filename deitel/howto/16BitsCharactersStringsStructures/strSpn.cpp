/* strSpn.cpp */
// using strspn (return len of initial segment of s1 containing only chars from
// s2)
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  const char* s1 = "The value is 3.141692654";
  const char* s2 = "aehilsuv T";

  cout << "s1: " << s1 << "\ns2: " << s2
       << "\n\nThe length of the initial segment of s1 containing only"
       << "\ncharacters from s2 is: " << strspn(s1, s2) << endl;
  
  return 0;
}
