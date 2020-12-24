#include <cstdio>


int main() {
  unsigned short a = 0b10101010;
  printf("%hu\n", a); // 170
  int b = 0123;       // octal!
  printf("%d\n", b);  // 83
  unsigned long long d = 0xFFFFFFFFFFFFFFF;
  printf("%llu\n", d); // 1152921504606846975
  return 0;
}
