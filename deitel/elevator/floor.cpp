/* floor.cpp */
// Member func defs for Floor class
#include <iostream>
using std::cout;
using std::endl;

#include "floor.hpp"
#include "person.hpp"
#include "elevator.hpp"

const int Floor::FLOOR1 = 1;
const int Floor::FLOOR2 = 2;

// Constructor
Floor::Floor(int number, Elevator &elevatorHandle)
  : floorButton(number, elevatorHandle),
    floorNumber(number),
    elevatorRef(elevatorHandle),
    occupantPtr(0),
    light(floorNumber == 1 ? "floor 1" : "floor 2") {

  cout << "floor " << floorNumber << " created" << endl;
}

// Destructor
Floor::~Floor() {
  cout << "floor " << floorNumber << " destroyed" << endl;
}

// Accessors
int Floor::getNumber() const { return floorNumber; }



// Determine if floor is occupied
bool Floor::isOccupied() const { return (occupantPtr != 0); }

// Pass person to floor
void Floor::personArrives(Person * const personPtr) { occupantPtr = personPtr; }

// Notify floor of elevator's arrival
Person *Floor::elevatorArrived() {
  // reset button on floor if needed
  cout << "floor " << floorNumber << "resets its button" << endl;
  floorButton.resetButton();
  light.turnOn();

  return occupantPtr;
}

// Tell floor elevator is leaving
void Floor::elevatorLeaving() { light.turnOff(); }

// Notify floor that person is leaving
void Floor::personBoardingElevator() { occupantPtr = 0; }
