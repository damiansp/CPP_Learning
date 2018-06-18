#include <iostream>

using namespace std;


enum CardinalDirections { NORTH = 25, SOUTH, EAST, WEST };


int main() {
  CardinalDirections windDirection = SOUTH;

  cout << "Displaying enum labels and values." << endl;
  cout << "NORTH: " << NORTH << endl;
  cout << "SOUTH: " << SOUTH << endl;
  cout << "EAST: " << EAST << endl;
  cout << "WEST: " << WEST << endl;
  cout << "Variable 'windDirection' = " << windDirection << endl;
  return 0;
}
