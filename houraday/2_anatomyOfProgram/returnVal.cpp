#include <iostream>

using namespace std;

int demoConsoleOutput();



int main() {
  return demoConsoleOutput();
}


int demoConsoleOutput() {
  cout << "This is a simple string literal" << endl;
  cout << "A five: " << 5 << endl;
  cout << "10 / 5 = " << 10 / 5 << endl;
  cout << "Pi ~ (int) 22 / 7 = " << 22 / 7 << endl;
  cout << "Pi ~ 22 / 7 = " << 22. / 7 << endl;
  return 0;
}
