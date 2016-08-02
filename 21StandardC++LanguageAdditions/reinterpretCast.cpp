/* reinterpretCast.cpp */
// reinterpret_cast operator demo
#include <iostream>
using std::cout;
using std::endl;

int main() {
  int x = 120;
  int* ptr = &x;

  cout << *reinterpret_cast<char*>(ptr) << endl;

  return 0;
}
