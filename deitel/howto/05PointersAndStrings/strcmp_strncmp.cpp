/* using strcmp and strncmp */
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstring>

int main() {
  char *s1 = "Buon Natale", // deprecated syntax: use s1[] = "..."
    *s2 = "Buon Natale",
    *s3 = "Feliz Navidad",
    *s4 = "Felicidades";

  cout << "s1: " << s1 << endl << "s2: " << s2 << endl << "s3: " << s3 << endl
       << endl
       << "strcmp(s1, s2): " << setw(2) << strcmp(s1, s2) << endl
       << "strcmp(s1, s3): " << setw(2) << strcmp(s1, s3) << endl
       << "strcmp(s3, s1): " << setw(2) << strcmp(s3, s1) << endl << endl;
  
  cout << "s4: " << s4 << endl
       << "strncmp(s1, s3, 4): " << setw(2) << strncmp(s1, s3, 4) << endl
       << "strncmp(s3, s4, 4): " << setw(2) << strncmp(s3, s4, 4) << endl
       << "strncmp(s4, s4, 5): " << setw(2) << strncmp(s3, s4, 5) << endl;
  
  return 0;
}
