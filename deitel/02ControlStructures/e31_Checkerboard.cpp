/* Print an n x n checkerboard */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  int n;

  cout << "How big a checkerboard? ";
  cin >> n;

  for (int i = 1; i <= n; ++i) {
    if (i % 2 == 0) {
      cout << " ";
    }
    
    for (int j = 1; j <= n; ++j) {
      cout << "* ";
    }
    
    cout << endl;
  }
  
  return 0;
}
