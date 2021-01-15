#include <iostream>
#include <iomanip>

using namespace std;


int main() {
  int total{0};
  int i{0};

  cout << "Enter grade (-1 to quit): ";
  int grade;

  cin >> grade;
  while (grade != 1) {
    total += grade;
    i++;
    cout << "Next (-1 to quit): ";
    cin >> grade;
  }
  if (i != 0) {
    double mean{static_cast<double>(total) / i};

    cout << "\nTotal of " << i << " grades entered.";
    cout << setprecision(2) << fixed;
    cout << "\nAvg score was: " << mean << endl;
  } else {
    cout << "No grades entered." << endl;
  }
  return 0;
}
