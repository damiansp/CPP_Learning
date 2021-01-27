#include <cstdio>


int main() {
  unsigned long max = 0;
  unsigned long vals[] = {10, 50, 20, 40, 0};

  for (unsigned long val: vals) {
    if (val > max) max = val;
  }
  printf("Max found: %lu\n", max);
}
