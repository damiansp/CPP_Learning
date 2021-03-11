#include <cstdio>


int main() {
  char lower[] = "abc?e";
  char upper[] = "ABC?E";
  char* upperPtr = upper;  // same as: char* upperPtr = &upper[0];

  lower[3] = 'd';
  upperPtr[3] = 'D';

  char lowerLetter4 = lower[3];
  char upperLetter4 = upperPtr[3];

  printf("Lower: %s\nupper: %s\n", lower, upper);
  printf("4th chars: %c, %c\n", lowerLetter4, upperLetter4);
  return 0;
}
