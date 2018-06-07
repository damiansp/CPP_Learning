/* strCSpn.cpp */
// Using strcspn (len of str1 not containing chars in str2)
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  const char* s1 = "Pi is roughly 3.141592654";
  const char* s2 = "1234567890";

  cout << "s1 = " << s1 << "\ns2 = " << s2
       << "\n\nThe length of the initial segment of s1\n"
       << "containing no characters from s2 is: " << strcspn(s1, s2) << endl;
  
  return 0;
}
