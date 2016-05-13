// input an int n, and print an n x n square of ****s
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int dim;

  cout << "Enter square dimensions: ";
  cin >> dim;

  for (int i = 1; i <= dim; i++) {
    if (i == 1 || i == dim) {
      for (int star = 1; star <= dim - 1; star++) { 
        cout << "*";
      }
    } else {
      cout << "*";
      for (int space = 2; space <= dim - 1; space++) {
        cout << " ";
      }
    }

    cout << "*" << endl;
  }
  
  return 0;
}

