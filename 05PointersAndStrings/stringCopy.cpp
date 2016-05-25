/* Using array notation and pointer notation to copy strings */
#include <iostream>
using std::cout;
using std::endl;

/* use array notation */
void copy1(char *s1, const char *s2) {
  for (int i = 0; (s1[i] = s2[i]) != '\0'; i++) { ; }
}

/* pointer notation */
void copy2(char *s1, const char *s2) {
  for (; (*s1 = *s2) != '\0'; s1++, s2++) { ; }
}



int main() {
  char string1[11],
    *string2 = "I say Hello",  /* deprecated */
    string3[15],
    string4[] = "You say Goodbye";

  copy1(string1, string2);
  cout << "string 1:\n> " << string1 << endl;

  copy2(string3, string4);
  cout << "string 3:\n> " << string3 << endl;

  return 0;
}
