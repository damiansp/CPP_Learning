/* memChr.cpp */
// void* memchr(const void* s, int c, size_t n)
// Locate first occurrence of c in the first n chars of s, return pointer to c
// in s or 0 if not found
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  char s[] = "This here is a string";

  cout << "Thre remainder of s after 't' is: "
       << static_cast<char*>(memchr(s, 't', 18)) << endl;
  
  return 0;
}
