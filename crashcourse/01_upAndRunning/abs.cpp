#include <cstdio>


int abs(int x) {
  if (x < 0) return -x;
  return x;
}


int sum(int a, int b) {
  return a + b;
}


int main() {
  int m = 9,
    n = -8;
  printf("|%d| = %d\n", m, abs(m));
  printf("|%d| = %d\n", n, abs(n));
  printf("%d + %d = %d\n", m, n, sum(m, n));
  return 0;
}
