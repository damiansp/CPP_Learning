/* door.cpp */
// Member funcs for class Door
#include <iostream>
using std::cout;
using std::endl;

#include "door.h"
#include "person.h"
#include "floor.h"
#include "elevator.h"

// Constructor
Door::Door()
  : open(false) {

  cout << "door created" << endl;
}

// Destructor
Door::~Door() { cout << "door destroyed" << endl; }


// open door
void Door::openDoor(Person * const passengerPtr, // getting off
                    Person * const nextPassengerPtr, // getting on
                    Floor &currentFloor,
                    Elevator &elevator) {
  if (!open) {
    open = true;
    cout << "elevator opens its door on floor " << currentFloor.getNumber() << endl;

    if (passengerPtr != 0) {
      passengerPtr -> exitElevator(currentFloor, elevator);
      delete passengerPtr;
    }

    if (nextPassengerPtr != 0) {
      nextPassengerPtr -> enterElevator(elevator, currentFloor);
    }
  }
}

// close door
void Door::closeDoor(const Floor &currentFloor) {
  if (open) {
    open = false;
    cout << "elevator closes its door on floor " << currentFloor.getNumber()
         << endl;
  }
}
