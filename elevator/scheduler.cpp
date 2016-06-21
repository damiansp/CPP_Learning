/* scheduler.cpp */
// Member func defs for Scheduler class
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
#include <ctime>

#include "scheduler.h"
#include "floor.h"
#include "person.h"

// Constructor
Scheduler::Scheduler(Floor &firstFloor, Floor &secondFloor)
  : currentClockTime(0), floor1Ref(firstFloor), floor2Ref(secondFloor) {

  srand(time(0));
  cout << "scheduler created" << endl;

  // sched first arrivals for floor 1 and 2
  scheduleTime(floor1Ref);
  scheduleTime(floor2Ref);
}

// Destructor
Scheduler::~Scheduler() { cout << "scheduler destroyed" << endl; }



// Schedule arrival on a floor
void Scheduler::scheduleTime(const Floor &floor) {
  int floorNumber = floor.getNumber();
  int arrivalTime = currentClockTime + (5 + rand() % 16);

  floorNumber == Floor::FLOOR1 ?
    floor1ArrivalTime = arrivalTime :
    floor2ArrivalTime = arrivalTime;

  cout << "(scheduler schedules next person for floor " << floorNumber
       << " at time " << arrivalTime << ")\n";
}



// reschedule arrival on a floor
void Scheduler::delayTime(const Floor &floor) {
  int floorNumber = floor.getNumber();
  int arrivalTime = (floorNumber == Floor::FLOOR1) ?
    ++floor1ArrivalTime : ++floor2ArrivalTime;

  cout << "(scheduler delays next person for floor " << floorNumber
       << " until time" << arrivalTime << ")\n";
}

// give time to scheduler
void Scheduler::processTime(int time) {
  currentClockTime = time;

  // handle arrivals on floors 1 & 2
  handleArrivals(floor1Ref, currentClockTime);
  handleArrivals(floor2Ref, currentClockTime);
}

// create new person and place on specified floor
void Scheduler::createNewPerson(Floor &floor) {
  int destinationFloor = floor.getNumber() == Floor::FLOOR1 ?
    Floor::FLOOR2 : Floor::FLOOR1;

  // create new person
  Person *newPersonPtr = new Person(destinationFloor);
  cout << "scheduler creates person " << newPersonPtr -> getID() << endl;

  // place person on proper floor
  newPersonPtr -> stepOntoFloor(floor);

  // schedule next arrival
  scheduleTime(floor);
}

// handle arrivals for a specified floor
void Scheduler::handleArrivals(Floor &floor, int time) {
  int floorNumber = floor.getNumber();
  int arrivalTime = (floorNumber == Floor::FLOOR1) ?
    floor1ArrivalTime : floor2ArrivalTime;

  if (arrivalTime == time) {
    if (floor.isOccupied()) {
      delayTime(floor);
    } else {
      createNewPerson(floor);
    } 
  }
}
