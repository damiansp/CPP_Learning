/* cstringConvert.cpp */
// Convert to C-style strings
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main() {
  string s("STRINGS");
  const char* ptr1 = 0;
  int len = s.length();
  char* ptr2 = new char[len + 1];  // include final \0

  // Copy chars out of string into allocated memory
  s.copy(ptr2, len, 0);
  ptr2[len] = '\0'; // add null terminator

  // Output
  cout << "string s is " << s << "\ns converted to a C-style string is "
       << s.c_str() << "\nptr1 is ";

  // Assign to ptr1 the const char* returned by data().  NOTE: potentially
  // dangerous assignment; if string is modified, ptr1 can become invalid
  ptr1 = s.data();

  for (int k = 0; k < len; ++k) {
    cout << *(ptr1 + k); // pointer arithmetic
  }

  cout << "\nptr2 is " << ptr2 << endl;
  delete [] ptr2;

  return 0;
}
