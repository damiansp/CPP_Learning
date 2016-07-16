/* memCmp.cpp */
// int memcmp(const void* s1, const void* s2, size_t n)
// Compare first n chars of s1 and s2 return: { <0, 0, >0 } = s1 { <, =, > } s2
#include <cstring>
#include <iomanip>
using std::setw;

#include <iostream>
using std::cout;
using std::endl;

int main() {
  char s1[] = "ABCDEFG",
    s2[] = "ABCDXYZ";

  cout << "s1: " << s1 << "\ts2: " << s2
       << "\nmemcmp(s1, s2, 4): " << memcmp(s1, s2, 4)
       << "\nmemcmp(s1, s2, 7): " << memcmp(s1, s2, 7)
       << "\nmemcmp(s2, s1, 7): " << memcmp(s2, s1, 7) << endl;
    
  return 0;
}
