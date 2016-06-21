/* person.cpp */
// Member func defs for Person class
#include <iostream>
using std::cout;
using std::endl;

#include "person.h"
#include "floor.h"
#include "elevator.h"

// init static member personCount
int Person::personCount = 0;

// Constructor
Person::Person(const int destFloor)
  : ID(++personCount), destinationFloor(destFloor) {}

// Destructor
Person::~Person() {
  cout << "person " << ID << " exits simulation of floor " << destinationFloor
       << " (person destructor invoked)" << endl;
}

// Accessors
int Person::getID() const { return ID; }



// Person walks onto floor
void Person::stepOntoFloor(Floor &floor) {
  // notify floor a person is coming
  cout << "person " << ID << " steps onto floor " << floor.getNumber() << endl;
  floor.personArrives(this);

  // press button on floor
  cout << "person " << ID << " presses floor button of floor " << floor.getNumber()
       << endl;
  floor.floorButton.pressButton();
}

// Person enters elevator
void Person::enterElevator(Elevator &elevator, Floor &floor) {
  floor.personBoardingElevator();
  elevator.passengerEnters(this);

  // press elev button
  cout << "person " << ID << " presses elevator button" << endl;
  elevator.elevatorButton.pressButton();
}

// Person exits elevator
void Person::exitElevator(const Floor &floor, Elevator &elevator) const {
  cout << "person " << ID << " exits elevator on floor " << floor.getNumber()
       << endl;
  elevator.passengerExits();
}
