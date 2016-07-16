/* strStr.cpp */
// Using strstr (return pointer to s2 from substring to the end)
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  const char* s1 = "Damian S. Phillips";
  const char* s2 = ". Ph";

  cout << "s1: " << s1 << "\ns2: " << s2
       << "\n\nThe remainder of s1 starting with the first occurrence of s2: "
       << "\n" << strstr(s1, s2) << endl;

  return 0;
}
