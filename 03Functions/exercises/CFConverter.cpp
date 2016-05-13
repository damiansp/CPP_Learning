/* Convert between degrees C and F */
#include <iostream>
using std::cout;
using std::endl;
using std::ios;

#include <iomanip>
using std::setw;
using std::setiosflags;
using std::setprecision;

double celsiusToFahrenheit(double c) {
  return c * 9 / 5 + 32;
}

double fahrenheitToCelsius(double f) {
  return (f - 32) * 5 / 9;
}



int main() {
  /* Print C to F table in 10 deg increments */
  cout << "Celsius to Fahrenheit Table" << endl;
  cout << setw(10) << "C" << setw(10) << "F" << endl;
  cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(1);
    
  for (double c = 0.0; c <= 100.0; c += 10) {
    cout << setw(10) << c << setw(10) << celsiusToFahrenheit(c) << endl;
  }

  cout << endl << endl;

  /* Print F to C table in 10 deg increments */
  cout << "Fahrenheit to Celsius Table" << endl;
  cout << setw(10) << "F" << setw(10) << "C" << endl;

  for (double f = 32.0; f <= 212.0; f += 10) {
    cout << setw(10) << f << setw(10) << fahrenheitToCelsius(f) << endl;
  }

  cout << endl << endl;
  
  return 0;
}
