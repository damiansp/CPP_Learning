/* floor.h */
// Floor class def
#ifndef FLOOR_H
#define FLOOR_H

class Elevator;

class Floor {
 public:
  Floor(int, Elevator &);
  ~Floor();

  bool isOccupied();
  int getNumber(); // floor's number
  void personArrives();
  void elevatorArrived();
  void elevatorLeaving();

 private:
  int floorNumber;
  Elevator &elevatorRef;
};

#endif 
