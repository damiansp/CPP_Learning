#include <iostream>

using std::cin;
using std::cout;
using std::endl;

//using namespace std

int main() {
  int n1{0}; // init as 0
  int n2{0};
  int sum{0};

  cout << "Enter int1: ";
  cin >> n1;
  cout << "int2: ";
  cin >> n2;
  sum = n1 + n2;
  cout << "Sum is " << sum << endl;
  return 0;
}
