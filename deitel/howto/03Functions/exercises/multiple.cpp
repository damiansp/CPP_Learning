/* find if a is a multible of b */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool isMultiple(int a, int b) {
  if (b % a == 0) {
    return true;
  }

  return false;
}



int main() {
  int a, b;
  bool result;

  cout << "Enter two ints, to determine if the first is a multiple of the"
       << " second: ";
  cin >> a >> b;

  result = isMultiple(a, b);

  cout << a << " is " << (result ? "" : "not ") << "a multiple of " << b
       << endl;

  return 0;
}
