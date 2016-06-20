/* elevator.h */
// Elevator class def
#ifndef ELEVATOR_H
#define ELEVATOR_H

#include "elevatorButton.h"
#include "door.h"
#include "bell.h"

class Floor;
class Person;

class Elevator {
 public:
  Elevator(Floor &, Floor &);
  ~Elevator();

  void summonElevator(int floor);
  void prepareToLeave(bool);
  void processTime(int time);
  void passengerEnters(Person * const);
  void passengerExits();
  ElevatorButon elevatorButton;

 private:
  static const int ELEVATOR_TRAVEL_TIME; // time to move between floors
  static const int UP;
  static const int DOWN;
  int currentBuildingClockTime,
    direction,
    currentFloor,
    arrivalTime; // at next floor
  bool moving,
    floor1NeedsService,
    floor2NeedsService;
  Floor &floor1Ref,
    &floor2Ref;
  Person *passengerPtr;
  Door door;
  Bell bell;

  void processPossibleArrival();
  void processPossibleDeparture();
  void arrivalAtFloor(Floor &);
  void move();
};

#endif
