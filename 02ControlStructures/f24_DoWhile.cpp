// do/while structure
#include <iostream>
using std::cout;
using std::endl;

int main() {
  int counter = 1;

  do {
    cout << counter << " ";
  } while (++counter <= 10);

  cout << endl;

  return 0;
}
