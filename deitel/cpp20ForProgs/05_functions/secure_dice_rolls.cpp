#include <ctime>
#include <iomanip>
#include <iostream>
#include <random>
#include "gsl/gsl"
using namespace std;


int main() {
  default_random_engine eng{gsl::narrow_cast<unsigned int>(time(0))};
  const uniform_int_distribution<int> rand_int{1, 6};
  for (int i{1}; i <= 10; ++i) cout << setw(10) << rand_int(eng);
  cout << endl;
  return 0;
}
