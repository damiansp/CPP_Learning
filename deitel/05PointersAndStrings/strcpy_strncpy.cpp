/* Using strcpy and strncpy */
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>

int main() {
  char x[] = "Old Black Betty, Bam ba lam";
  char y[25],
    z[15];

  cout << "x:\n> " << x << endl
       << "strcpy(y, x):\n> " << strcpy(y, x) << '\n';

  strncpy(z, x, 14); // Does not copy null terminator
  z[14] = '\0';
  cout << "z:\n> " << z << endl;
  
  return 0;
}
