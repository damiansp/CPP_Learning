#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
  int seed{0};
  cout << "Enter seed: ";
  cin >> seed;
  srand(seed);  
  for (int i{1}; i <= 10; ++i) {
    cout << (1 + rand() % 6) << " ";
  }
  cout << endl;
  return 0;
}
