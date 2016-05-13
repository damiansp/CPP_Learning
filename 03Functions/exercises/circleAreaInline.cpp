/* inlines are for short freq functions */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <math.h>

// const means function cannot change value
inline double circleArea(const double r) {
  return M_PI * r * r;
}

int main() {
  int r;

  while (true) {
    cout << "Enter radius of circle to find area: (or -1 to quit) ";
    cin >> r;
    if (r == -1) {
      break;
    } else {
      cout << "Area: " << circleArea(r) << endl;
    }
  }

  return 0;
}
