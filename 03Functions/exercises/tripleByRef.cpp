/* triple a value using both call by val and by ref */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int tripleByVal(int n) {
  return 3 * n;
}

void tripleByRef(int &n) {
  n *= 3;
}



int main() {
  int x = 5;

  cout << "x = " << x << endl << endl;

  cout << "tripleByVal(x) = " << tripleByVal(x) << endl
       << "x = " << x << endl << endl;

  cout << "Calling tripleByRef(x)..." << endl;
  tripleByRef(x);
  cout << "x = " << x << endl;

  return 0;
}
