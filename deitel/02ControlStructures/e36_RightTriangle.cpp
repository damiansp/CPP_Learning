/* Read 3 values and determine if they could be the sides of a rigth 
   triangle */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  double s1, s2, s3, h; /* sides and hypoteneuse */
  double error; /* difference in a^2 + b^2 and h^2 */
  double precision = 0.0001;
  
  cout << "Enter 3 positive values for a potential right triangle. First: ";
  cin >> s1;
  cout << "Second: ";
  cin >> s2;
  cout << "Third: ";
  cin >> s3;

  if (s1 > s2 & s1 > s3) {
    h = s1;
    s1 = s3;
  } else if (s2 > s3) {
    h = s2;
    s2 = s3;
  } else {
    h = s3;
  }

  /* make precise to precision */
  error =  (s1 * s1 + s2 * s2) - h * h;
  if (error < 0) {
    error = -error;
  }

  if (error <= precision) {
    cout << "That is a valid right triangle." << endl;
  } else {
    cout << "Not a valid right triangle." << endl;
  }

  return 0;
}
