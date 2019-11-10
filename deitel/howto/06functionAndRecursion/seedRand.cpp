#include <cstdlib>
using std::rand;
using std::srand;

#include <iomanip>
using std::setw;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main() {
  unsigned seed;

  cout << "Enter seed: ";
  cin >> seed;
  srand(seed);  // seed generator
  for (int i = 1; i <= 10; i++) {
    cout << setw(10) << (1 + rand() % 6);
    if (i % 5 == 0) { cout << endl; }
  }
  return 0;
}
