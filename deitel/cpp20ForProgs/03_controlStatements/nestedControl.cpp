#include <iostream>

using namespace std;


int main() {
  int passes{0};
  int failures{0};
  int i{1};

  while (i <= 10) {
    cout << "Enter result (1=pass; 2=fail): ";
    int res;
    cin >> res;
    if (res == 1) passes++;
    else failures++;
    i++;
  }
  cout << "Passed: " << passes << "\nFailed: " << failures << endl;
  if (passes > 8) cout << "Give instructor a bonus!" << endl;
  return 0;
}
