#include <iostream>

using namespace std;


int main() {
  unsigned short uShort = 65535;
  short sShort = 32767;

  cout << "Incr unsigned short: " << uShort << " gives: ";
  cout << ++uShort << endl;
  cout << "Inct signed short: " << sShort << " gives: ";
  cout << ++sShort << endl;
  return 0;
}
