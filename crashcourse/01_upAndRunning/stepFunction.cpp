#include <cstdio>

int stepFunction(int x) {
  int res = 0;
  if (x < 0) return -1;
  if (x > 0) return 1;
  return res;
}


int main() {
  int n1 = 42,
    n2 = 0,
    n3 = -123;
  int res1 = stepFunction(n1);
  int res2 = stepFunction(n2);
  int res3 = stepFunction(n3);

  printf("n1: %d, step: %d\n", n1, res1);
  printf("n2: %d, step: %d\n", n2, res2);
  printf("n3: %d, step: %d\n", n3, res3);
  return 0;
}
