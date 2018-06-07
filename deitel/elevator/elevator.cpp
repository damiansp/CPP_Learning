/* elevator.cpp */
// Member func defs for class Elevator
#include <iostream>
using std::cout;
using std::endl;

#include "elevator.hpp"
#include "person.hpp"
#include "floor.hpp"

const int Elevator::ELEVATOR_TRAVEL_TIME = 5;
const int Elevator::UP = 0;
const int Elevator::DOWN = 1;

// Constructor
Elevator::Elevator(Floor &firstFloor, Floor &secondFloor)
  : elevatorButton(*this),
    currentBuildingClockTime(0),
    moving(false),
    direction(UP),
    currentFloor(Floor::FLOOR1),
    arrivalTime(0),
    floor1NeedsService(false),
    floor2NeedsService(false),
    floor1Ref(firstFloor),
    floor2Ref(secondFloor),
    passengerPtr(0) {

  cout << "elevator created" << endl;
}

// Destructor
Elevator::~Elevator() { cout << "elevator destroyed" << endl; }



// Pass time to elevator
void Elevator::processTime(int time) {
  currentBuildingClockTime = time;

  if (moving) { processPossibleArrival(); }
  else { processPossibleDeparture(); }

  if (!moving) { cout << "elevator at rest on floor " << currentFloor << endl; }
}

// when moving, determine if elevator should stop
void Elevator::processPossibleArrival() {
  // if elevator arrives at destination floor
  if (currentBuildingClockTime == arrivalTime) {
    // update current floor
    currentFloor = (currentFloor == Floor::FLOOR1 ? Floor::FLOOR2 : Floor::FLOOR1);

    // update direction
    direction = (currentFloor == Floor::FLOOR1 ? UP : DOWN);

    cout << "elevator arrives on floor " << currentFloor << endl;

    arriveAtFloor(currentFloor == Floor::FLOOR1 ? floor1Ref : floor2Ref);

    return;
  }

  // elevator is moving
  cout << "elevator moving " << (direction == UP ? "up" : "down") << endl;
}

// determine if elevator should move
void Elevator::processPossibleDeparture() {
  // this floor needs service?
  bool currentFloorNeedsService = currentFloor == Floor::FLOOR1 ?
    floor1NeedsService : floor2NeedsService;

  // other floor?
  bool otherFloorNeedsService = currentFloor == Floor::FLOOR1 ?
    floor2NeedsService : floor1NeedsService;

  // service this floor if needed
  if (currentFloorNeedsService) {
    arriveAtFloor(currentFloor == Floor::FLOOR1 ? floor1Ref : floor2Ref);
    return;
  } else {
    // service other floor if needed
    prepareToLeave(otherFloorNeedsService);
  }
}

// arrive at a particular floor
void Elevator::arriveAtFloor(Floor &arrivalFloor) {
  moving = false; // reset

  cout << "elevator resests its button" << endl;
  elevatorButton.resetButton();

  bell.ringBell();

  // Notify floor that elevator has arrived
  Person *floorPersonPtr = arrivalFloor.elevatorArrived();
  door.openDoor(passengerPtr, floorPersonPtr, arrivalFloor, *this);

  // this floor needs service?
  bool currentFloorNeedsService = currentFloor == Floor::FLOOR1 ?
    floor1NeedsService : floor2NeedsService;

  // other floor?
  bool otherFloorNeedsService = currentFloor == Floor::FLOOR1 ?
    floor2NeedsService : floor1NeedsService;

  // if this floor does not need service, prep to leave for other floor
  if (!currentFloorNeedsService) { prepareToLeave(otherFloorNeedsService); }
  else { // reset service flag
    currentFloor == Floor::FLOOR1 ?
      floor1NeedsService = false : floor2NeedsService = false;
  }
}

// request service from elevator
void Elevator::summonElevator(int floor) {
  // set appropriate service flag
  floor == Floor::FLOOR1 ? floor1NeedsService = true : floor2NeedsService = true;
}

// accept a passenger
void Elevator::passengerEnters(Person * const personPtr) {
  // board passenger
  passengerPtr = personPtr;
  cout << "person " << passengerPtr -> getID() << " enters elevator from floor "
       << currentFloor << endl;
}

// notify elevator that passenger is exiting
void Elevator::passengerExits() { passengerPtr = 0; }

// prep to leave a floor
void Elevator::prepareToLeave(bool leaving) {
  Floor &thisFloor = currentFloor == Floor::FLOOR1 ? floor1Ref : floor2Ref;

  // notify floor that elevator may be leaving
  thisFloor.elevatorLeaving();
  door.closeDoor(thisFloor);

  // leave if necessary
  if (leaving) { move(); }
}

// go to a particular floor
void Elevator::move() {
  moving = true;

  // sched arrival time
  arrivalTime = currentBuildingClockTime + ELEVATOR_TRAVEL_TIME;

  cout << "elevator begins to move " << (direction == DOWN ? "down " : "up ")
       << "to floor " << (direction == DOWN ? '1' : '2')
       << " (arrives at time " << arrivalTime << ')' << endl;
}
