/* floorButton.cpp */
// Member func defs for class FloorButton
#include <iostream>
using std::cout;
using std::endl;

#include "floorButton.h"
#include "elevator.h"

// Constructor
FloorButton::FloorButton(const int number, Elevator &elevatorHandle)
  : floorNumber(number), pressed(false), elevatorRef(elevatorHandle) {

  cout << "floor " << floorNumber << " button created" << endl;
}

// Destructor
FloorButton::~FloorButton() {
  cout << "floor " << floorNumber << " button destroyed" << endl;
}


// press button
void FloorButton::pressButton() {
  pressed = true;
  cout << "floor " << floorNumber << " button summons elevator" << endl;
  elevatorRef.summonElevator(floorNumber);
}

// reset button
void FloorButton::resetButton() { pressed = false; }
