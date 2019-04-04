#include <iostream>
using std::cout;
using std::endl;


int main() {
  int total = 0;

  for (int i = 2; i <= 20; i += 2) { total += i; }
  cout << "Sum is " << total << endl;
  return 0;
}
