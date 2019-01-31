/* strRchr.cpp */
// using strrchr (find laste occurrence of char in str)
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  const char* s1 = "A zoo should have zillions of zebras.";
  char ch = 'z';

  cout << "The remainder of s1 beginning with the last last occurrence of "
       << "\n'" << static_cast<char>(ch) << "' is: \"" << strrchr(s1, ch)
       << '\"' << endl;
  
  return 0;
}
