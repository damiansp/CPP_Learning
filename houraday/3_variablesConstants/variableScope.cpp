#include <iostream>

using namespace std;


void multiplyNumbers() {
  int n1 = 0;
  int n2 = 0;
  
  cout << "Enter first number: ";
  cin >> n1;
  cout << "Second: ";
  cin >> n2;

  int prod = n1 * n2;

  cout << n1 << " * " << n2 << " = " << prod << endl;
}


int main() {
  cout << "Multiplication program" << endl;
  multiplyNumbers();
  return 0;
}
