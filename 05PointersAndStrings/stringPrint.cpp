/* Print a string one char at a time */
/* using non-const pointer to const data */
#include <iostream>
using std::cout;
using std::endl;

/* the chars are read-only (sPtr is not const, but [each] *sPtr is) */
void printChars(const char *sPtr) {
  for (; *sPtr != '\0'; sPtr++) {
    cout << *sPtr;
  }
}

int main() {
  char string[] = "print some characters in a string";

  cout << "printChars(string):\n> ";
  printChars(string);
  cout << endl;
  
  return 0;
}
