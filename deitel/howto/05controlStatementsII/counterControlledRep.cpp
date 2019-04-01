#include <iostream>
using std::cout;
using std::endl;


int main() {
  int counter = 1;

  while (counter <= 10) {
    cout << counter++ << " ";
  }
  cout << endl;
  return 0;
}
