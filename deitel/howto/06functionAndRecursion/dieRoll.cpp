#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;


int main() {
  for (int i = 1; i <= 20; i++) {
    cout << setw(10) << (1 + rand() % 6);
    if (i % 5 == 0) { cout << endl; }
  }
  return 0;
}
