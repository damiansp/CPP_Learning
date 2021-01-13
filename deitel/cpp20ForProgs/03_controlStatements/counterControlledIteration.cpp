#include <iostream>

using namespace std;


int main() {
  int total{0};
  int i{1};

  while (i <= 10) {
    cout << "Enter next grade: ";
    int grade;
    cin >> grade;
    total += grade;
    i++;
  }
  int mean{total / 10};
  cout << "\nTotal of all 10 grades: " << total;
  cout << "\nClass mean: " << mean << endl;
  return 0;
}
