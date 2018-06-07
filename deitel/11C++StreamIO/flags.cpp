/* flags.cpp */
#include <iostream>
using std::cout;
using std::endl;
using std::ios;

int main() {
  int i = 1000;
  double d = 0.0975312468;

  cout << "The value of the flags variable is: " << cout.flags()
       << "\nPrint int and double in original format:\n"
       << i << '\t' << d << "\n\n";

  long originalFormat = cout.flags(ios::oct | ios::scientific);

  cout << "Flags value: " << cout.flags()
       << "\nPrint int and double in new format:\n"
       << i << '\t' << d << "\n\n";

  cout.flags(originalFormat);
  cout << "Flags value: " << cout.flags()
       << "\nPrint values in original format again:\n"
       << i << '\t' << d << endl;
  
  return 0;
}
