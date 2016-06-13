/* elevator.h */
// Elevator class def
#ifndef ELEVATOR_H
#define ELEVATOR_H

class Floor;

class Elevator {
 public:
  Elevator(Floor &, Floor &);
  ~Elevator();

  void summonElevator(int floor);
  void prepareToLeave();
  void processTime(int time);
  void passengerEnters();
  void passengerExits();

 private:
  bool moving;
  int direction,
    currentFloor,
    arrivalTime; // at next floor

  Floor &floor1Ref;
  Floor &floor2Ref;
};

#endif
