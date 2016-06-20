/* Driver for the elevator simulation */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "building.h"


int main() {
  int duration;  // length of simulation (s)
  Building building;

  cout << "Enter run time: ";
  cin >> duration;
  cin.ignore();  // ignore return char

  cout << endl << "*** ELEVATOR SIMULATION BEGINNING ***" << endl << endl;
  building.runSimulation(duration);
  cout << "*** ELEVATOR SIMULATION COMPLETE ***" << endl;
    
  return 0;
}
