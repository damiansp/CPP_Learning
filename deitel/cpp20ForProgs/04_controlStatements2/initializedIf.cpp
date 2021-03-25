#include <iostream>

using namespace std;


int main() {
  if (int val{7}; val == 7) cout << "val is " << val << endl;
  else cout << "val is not 7, it is " << val << endl;
  if (int val{13}; val == 9) cout << "val is " << val << endl;
  else cout << "val is not 9, it is " << val << endl;
  return 0;
}
