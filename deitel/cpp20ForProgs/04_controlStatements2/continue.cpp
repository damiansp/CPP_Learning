#include <iostream>

using namespace std;


int main() {
  for (int i{1}; i <= 10; ++i) {
    if (i == 5) continue;
    cout << i << " ";
  }
  cout << endl;
  return 0;
}