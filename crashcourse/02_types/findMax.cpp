#include <cstddef>
#include <cstdio>


int main() {
  unsigned long max = 0;
  unsigned long vals[] = {10, 50, 20, 40, 0};

  for (size_t i = 0; i < 5; i++) {
    if (vals[i] > max) max = vals[i];
  }
  printf("Max found: %lu", max);
  return 0;
}
