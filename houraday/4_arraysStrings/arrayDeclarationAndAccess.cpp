#include <iostream>

using namespace std;


int main() {
  const int ARRAY_LENGTH = 5;
  int numbers[ARRAY_LENGTH] = {365, 12, 31, 24, 60};

  for (int i = 0; i < ARRAY_LENGTH; i++) {
    cout << "Element at index " << i << ": " << numbers[i] << endl;
  }
  return 0;
}
