/* Get 3 doubles, and determine if they are viable triangle lengths */
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  double s1, s2, s3;

  cout << "Enter the three non-negative values for the sides of the" <<
    " potential triangle\nSide 1: ";
  cin >> s1;
  cout << "Side 2: ";
  cin >> s2;
  cout << "Side 3: ";
  cin >> s3;

  if (s1 + s2 > s3 && s1 + s3 > s2  && s2 + s3 > s1) {
    cout << "That is a viable triangle." << endl;
  } else {
    cout << "Not a viable triangle." << endl;
  }
  
  return 0;
}
