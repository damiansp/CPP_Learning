/* door.h */
// Door class def
#ifndef DOOR_H
#define DOOR_H

class Person;
class Floor;
class Elevator;

class Door {
 public:
  Door();
  ~Door();

  void openDoor(Person * const, Person * const, Floor &, Elevator &);
  void closeDoor(const Floor &);

 private:
  bool open;
};

#endif
