#include <iostream>
using std::cout;
using std::endl;

//#include <Cube.h>


template <typename T>
T max(T a, T b) {
  if (a > b) { return a; }
  return b;
}


int main() {
  cout << "max(3, 5): " << max(3, 5) << endl;                          // 5
  cout << "max('a', 'd'): " << max('a', 'd') << endl;                  // 'd'
  cout << "max(\"Hey\", \"World\"): " << max ("Hey", "World") << endl; // World;
  //cout << "max(Cube(3), Cube(6)): " << max(Cube(3), Cube(6)) << endl;  // err
  return 0;
}
