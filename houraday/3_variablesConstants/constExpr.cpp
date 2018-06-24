#include <iostream>

// constexpr from C++ 11
// CXXFLAGS=-std=c++11
constexpr double GET_PI() { return 22. / 7; }
constexpr double TWICE_PI() { return 2 * GET_PI(); }

int main() {
  using namespace std;

  const double PI = 22. / 7;

  cout << "const PI: " << PI << endl;
  cout << "constexpr GET_PI():\n " << GET_PI() << endl;
  cout << "constexpr TWICE_PI():\n " << TWICE_PI() << endl;
  return 0;
}
