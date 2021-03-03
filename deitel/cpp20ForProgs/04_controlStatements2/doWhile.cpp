#include <iostream>

using namespace std;


int main() {
  int counter{1};

  do {
    cout << counter++ << " ";
  } while (counter <= 10);
  cout << endl;
  
  return 0;
}
