/* strPbrk.cpp */
// Using strpbrk (find, and return pointer to, first occurrence of char in str2
// in str1 or NULL if none)
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  const char* s1 = "This is only a test";
  const char* s2 = "Beware!";

  cout << "Of all the characters in s2 (" << s2 << "), "
       << "\n'" << *strpbrk(s1, s2) << '\'' << " is the first one to appear in"
       << "\ns1 (" << s1 << ")" << endl;
  
  return 0;
}
