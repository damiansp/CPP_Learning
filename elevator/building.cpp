/* building.cpp */
// Class Building member func defs
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "building.h"


// Constructor
Building::Building()
  : floor1(Floor::FLOOR1, elevator),
    floor2(Floor::FLOOR2, elevator),
    elevator(floor1, floor2) {

  cout << "building created" << endl;
}

// Destructor
Building::~Building() {
  cout << "building destroyed" << endl;
}



void Building::runSimulation(int totalTime) {
  int currentTime = 0;

  while (currentTime < totalTime) {
    clock.tick();
    currentTime = clock.getTime();
    cout << "TIME: " << currentTime << endl;
    scheduler.processTime(currentTime);
    elevator.processTime(currentTime);

    // stop ea sec for user to view input
    cin.get();
  }
}

      
