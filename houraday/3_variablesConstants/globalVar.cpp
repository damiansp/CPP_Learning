#include <iostream>

using namespace std;


// Globals
int n1 = 0;
int n2 = 0;
int prod = 0;


void multiplyNumbers() {
  cout << "Enter first number: ";
  cin >> n1;
  cout << "Second: ";
  cin >> n2;
  prod = n1 * n2;
  cout << n1 << " x " << n2  << " = " << prod << endl;
}


int main() {
  cout << "Multiplication program" << endl;
  multiplyNumbers();

  cout << "From main:" << endl;
  cout << n1 << " x " << n2 << " = " << prod << endl;
  return 0;
}
