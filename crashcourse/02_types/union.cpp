#include <cstdio>


union Variant {
  char string[10];
  int integer;
  double fp;
};


int main() {
  Variant v;
  v.integer = 42;
  printf("The answer: %d\n", v.integer);
  v.fp = 2.718282;
  printf("e: %f\n", v.fp);
  printf("Dumpster fire!!: %d\n", v.integer);
  return 0;
}
