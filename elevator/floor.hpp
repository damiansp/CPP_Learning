/* floor.h */
// Floor class def
#ifndef FLOOR_H
#define FLOOR_H

#include "floorButton.hpp"
#include "light.hpp"

class Elevator;
class Person;

class Floor {
 public:
  static const int FLOOR1;
  static const int FLOOR2;
  FloorButton floorButton;
  
  Floor(int, Elevator &);
  ~Floor();

  bool isOccupied() const;
  int getNumber() const; // floor's number

  // pass handle to new person coming on floor
  void personArrives(Person * const);

  // notify floor elevator has arrived
  Person *elevatorArrived();

  // notifly floor elevator leaving
  void elevatorLeaving();

  // notify floor person is leaving floor
  void personBoardingElevator();

 private:
  const int floorNumber;
  Elevator &elevatorRef;
  Person *occupantPtr;
  Light light;
};

#endif 
