// Calculate trip and total miles per gallon
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  double gallons = 0.0,
    totalGallons = 0.0,
    miles        = 0.0,
    totalMiles   = 0.0;
  int tripCounter = 0;

  cout << "Enter the number of gallons: (-1 to compute): ";
  cin >> gallons;

  while (gallons != -1) {
    totalGallons += gallons;
    cout << "Enter number of miles driven: ";
    cin >> miles;
    totalMiles += miles;

    cout << "This trip you got " << (miles / gallons) << " mpg." << endl;
    cout << "Enter the number of gallons: (-1 to compute): ";
    cin >> gallons;
  }

  cout << "Cumulatively, you have averaged " << (totalMiles / totalGallons)
       << "mpg" << endl;
  
  return (0);
}
