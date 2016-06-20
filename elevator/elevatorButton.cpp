/* elevatorButton.cpp */
// Member func defs for class ElevatorButton
#include <iostream>
using std::cout;
using std::endl;

#include "elevatorButton.h"
#include "elevator.h"

// Constructor
ElevatorButton::ElevatorButton(Elevator &elevatorHandle)
  : pressed(false), elevatorRef(elevatorHandle) {

  cout << "elevator button created" << endl;
}

// Destructor
ElevatorButton::~ElevatorButton() {
  cout << "elevator button destroyed" << endl;
}


// press button
void ElevatorButton::pressButton() {
  pressed = true;
  cout << "elevator burron tellse elevator to prepare to leave" << endl;
  elevatorRef.prepareToLeave(true);
}

// reset button
void ElevatorButton::resetButton() { pressed = false; }

