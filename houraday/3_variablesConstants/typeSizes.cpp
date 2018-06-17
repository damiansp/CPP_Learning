#include <iostream>

int main() {
  using namespace std;

  cout << "Computing the size of built-in types (bytes)" << endl;
  cout << "Size of..." << endl;
  cout << "  bool: " << sizeof(bool) << endl;
  cout << "  char: " << sizeof(char) << endl;
  cout << "  unsigned short: " << sizeof(unsigned short) << endl;
  cout << "  short: " << sizeof(short) << endl;
  cout << "  unsigned long: " << sizeof(unsigned long) << endl;
  cout << "  long: " << sizeof(long) << endl;
  cout << "  int: " << sizeof(int) << endl;
  cout << "  unsigned long long: " << sizeof(unsigned long long) << endl;
  cout << "  long long: " << sizeof(long long) << endl;
  cout << "  unsigned int: " << sizeof(unsigned int) << endl;
  cout << "  float: " << sizeof(float) << endl;
  cout << "  double: " << sizeof(double) << endl;
  cout << "\nOutput is comiler, hardware, and OS-dependent." << endl;
  return 0;
}
