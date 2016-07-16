/* memSet.cpp */
// void* memset(void* s, int c, size_t n)
// Copy c into the first n chars of s, return pointer to s
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  char s1[21] = "Damian Damian Damian";

  cout << "s1: " << s1 << endl;
  cout << "s1 after memset(s1, 'x', 10): "
       << static_cast<char*>(memset(s1, 'x', 10)) << endl;
  
  return 0;
}
