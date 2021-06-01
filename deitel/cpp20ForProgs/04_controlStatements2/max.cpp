#include <iomanip>
#include <iostream>

using namespace std;


int maximum(int x, int y, int z); // prototype


int main() {
  cout << "Enter 3 ints: ";
  int a, b, c;

  cin >> a >> b >> c;
  cout << "The maximum is: " << maximum(a, b, c) << endl;
  return 0;
}


int maximum(int x, int y, int z) {
  int maxVal{x};

  if (y > maxVal) maxVal = y;
  if (z > maxVal) maxVal = z;
  return maxVal;
}
