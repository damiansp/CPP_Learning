/* using overloaded functions */
#include <iostream>
using std::cout;
using std::endl;

int square(int x) {
  return x * x;
}

double square(double x) {
  return x * x;
}



int main() {
  cout << "square(7): " << square(7) << endl
       << "square(7.8): " << square(7.8) << endl;

  return 0;
}
