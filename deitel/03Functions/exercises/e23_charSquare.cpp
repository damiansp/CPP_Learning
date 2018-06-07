/* fill a square with user fed char */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void fillSquare(int dim, char c) {
  for (int i = 0; i < dim; i++) {
    cout << endl;
    for (int j = 0; j < dim; j++) {
      cout << c;
    }
  }

  cout << endl;
}

int main() {
  int dim = 0;
  char c = '*';

  cout << "Enter square dimension: ";
  cin >> dim;
  cout << "Enter fill character: ";
  cin >> c;

  fillSquare(dim, c);
  
  return 0;
}
