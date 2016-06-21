/* person.h */
// Person class def
#ifndef PERSON_H
#define PERSON_H

class Floor;
class Elevator;

class Person {
 public:
  Person(const int);
  ~Person();
  
  int getID() const;
  void stepOntoFloor(Floor &);
  void enterElevator(Elevator &, Floor &);
  void exitElevator(const Floor &, Elevator &) const;

 private:
  static int personCount;
  const int ID;
  const int destinationFloor;
};

#endif
