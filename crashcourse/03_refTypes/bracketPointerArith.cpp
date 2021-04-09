#include <cstdio>


int main() {
  char lower[] = "abc?e";
  char upper[] = "ABC?E";
  char* upperPtr = &upper[0]; // same as = upper;

  *(lower + 3) = 'd';
  *(upperPtr + 3) = 'D';

  char lowerD = *(lower + 3);
  char upperD = *(upperPtr + 3);

  printf("lower: %s\nupper: %s\n", lower, upper);
}
