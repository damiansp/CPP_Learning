/* floorButton.cpp */
// Member func defs for class FloorButton
#include <iostream>
using std::cout;
using std::endl;

#include "floorButton.hpp"
#include "elevator.hpp"

// Constructor
FloorButton::FloorButton(int number, Elevator &elevatorHandle)
  : Button(elevatorHandle), floorNumber(number) {

  cout << "floor " << floorNumber << " button created" << endl;
}

// Destructor
FloorButton::~FloorButton() {
  cout << "floor " << floorNumber << " button destroyed" << endl;
}


// press button
void FloorButton::pressButton() {
  cout << "floor " << floorNumber << " button summons elevator" << endl;
  elevatorRef.summonElevator(floorNumber);
}
