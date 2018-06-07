/* Convert lower case to upper case */
/* Using non-const pointer to non-const data */
#include <iostream>
using std::cout;
using std::endl;

#include <cctype>

void convertToUppercase(char *sPtr) {
  while (*sPtr != '\0') {
    if (islower(*sPtr)) {
      *sPtr = toupper(*sPtr);
    }

    ++sPtr;
  }
}

int main() {
  char string[] = "some characters and $32.95";

  cout << "string:\n> " << string << endl;
  convertToUppercase(string);

  cout << "convertToUppercase(string):\n> " << string << endl;

  return 0;
}
