#include <iostream>

using namespace std;


int main() {
  int n1;
  int n2;
  
  cout << "Program to multiply 2 integers" << endl;
  cout << "First number: ";
  cin >> n1;
  cout << "Second: ";
  cin >> n2;

  int prod = n1 * n2;

  cout << n1 << " * " << n2 << " = " << prod << endl;
  return 0;
}
