/* memCpy.cpp */
// memcpy(void* s1, const void* s2, size_t n)
// Copy n chars from s2 into s1; return pointer to s1
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  char s1[17],
    s2[] = "Copy this string";

  memcpy(s1, s2, 17);
  cout << "After s2 copied to s1, s1 contains: " << s1 << endl;

  return 0;
}
