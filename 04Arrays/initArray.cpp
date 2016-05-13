/* Initializing an array */
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main() {
  int  n[10],
    m[10] = {1, 12, 23, 34, 45, 56, 67, 78, 89, 90};

  const int arraySize = 10;
  int s[arraySize];

  for (int i = 0; i < 10; i++) {
    n[i] = i * i;
  }

  cout << "Element" << setw(10) << "Value" << endl;

  for (int i = 0; i < 10; i++) {
    cout << setw(7) << i << setw(10) << n[i] << endl;
  }

  // Same as previous for loop
  for (int i : n) {
    cout << setw(17) << i << endl;
  }

  for (int i : m) {
    cout << i << " ";
  }

  cout << endl;


  for (int j = 0; j < arraySize; j++) {
    s[j] = 2 + 2*j;
  }

  cout << "Element" << setw(10) << "Value" << endl;

  for (int j = 0; j < arraySize; j++) {
    cout << setw(7) << j << setw(10) << s[j] << endl;
  }

  
  return 0;
}
