#include <iostream>
using std::cout;
using std::endl;

#include <cmath>

int main() {
  double x;

  x = fabs(7.5);
  cout << "fabs(7.5) = " << x << endl;

  x = floor(7.5);
  cout << "floor(7.5) = " << x << endl;

  x = fabs(0.0);
  cout << "fabs(0.0) = " << x << endl;

  x = ceil(0.0);
  cout << "ceil(0.0) = " << x << endl;

  x = fabs(-6.4);
  cout << "fabs(-6.4) = " << x << endl;

  x = ceil(-6.4);
  cout << "ceil(-6.4) = " << x << endl;

  x = ceil(-fabs(-8 + floor(-5.5)));
  cout << "ceil(-fabs(-8 + floor(-5.5))) = " << x << endl;

  return 0;
}
