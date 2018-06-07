/* stringToDecimal.cpp */
// Using strtod
#include <cstdlib>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  const char* string = "51.2% were admitted";
  char* strPtr;
  double d = strtod(string, &strPtr);

  cout << "The string \"" << string << "\" is converted to the\ndouble value "
       << d << " and the string, \"" << strPtr << "\"" << endl;

  return 0;
}
