/* strChr.cpp */
// Using strchr (find index of char in str)
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  const char* string = "This is a test";
  char c1 = 'a',
    c2 = 'z';

  if (strchr(string, c1) != NULL) {
    cout << '\'' << c1 << "' was found in \"" << string << "\" at location \""
         << strchr(string, c1) << "\".\n";
  } else {
    cout << '\'' << c1 << "' was not found in \"" << string << "\".\n";
  }

  if (strchr(string, c2) != NULL) {
    cout << '\'' << c2 << "' was found in \"" << string << "\" at location "
         << strchr(string, c2) << ".\n";
  } else {
    cout << '\'' << c2 << "' was not found in \"" << string << "\".\n";
  }
  
  return 0;
}
