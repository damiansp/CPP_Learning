/* elevatorButton.cpp */
// Member func defs for class ElevatorButton
#include <iostream>
using std::cout;
using std::endl;

#include "elevatorButton.hpp"
#include "elevator.hpp"

// Constructor
ElevatorButton::ElevatorButton(Elevator &elevatorHandle)
  : Button(elevatorHandle) {
  cout << "elevator button created" << endl;
}

// Destructor
ElevatorButton::~ElevatorButton() {
  cout << "elevator button destroyed" << endl;
}


// press button
void ElevatorButton::pressButton() {
  cout << "elevator button tells elevator to prepare to leave" << endl;
  elevatorRef.prepareToLeave(true);
}
