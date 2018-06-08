#include <iostream>

int sub() {
  using std::cout;
  using std::endl;

  cout << "Goodbye, World..." << endl;
  return 0;
}

int main() {
  using namespace std;

  cout << "Hello, World!" << endl;
  sub();
  return 0;
}
