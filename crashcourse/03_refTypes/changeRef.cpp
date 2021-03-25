#include <cstdio>


int main() {
  int orig = 100;
  int& origRef = orig;

  printf("Orig: %d\n", orig);    // 100
  printf("Ref:  %d\n", origRef); // 100

  int newVal = 200;

  origRef = newVal;
  printf("Orig: %d\n", orig);    // 200!
  printf("New:  %d\n", newVal);  // 200
  printf("Ref:  %d\n", origRef); // 200
  return 0;
}
