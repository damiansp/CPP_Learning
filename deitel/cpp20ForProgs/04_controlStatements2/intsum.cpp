#include <iostream>

using namespace std;


int main() {
  int total{0};

  for (int i{2}; i <= 20; i += 2) total += i;
  cout << "Sum of evens 2, 4, ..., 20 = " << total << endl;
  return 0;
}
