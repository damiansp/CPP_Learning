/* person.h */
// Person class def
#ifndef PERSON_H
#define PERSON_H

class Person {
 public:
  Person(int);
  ~Person();
  
  int getID();
  void stepOntoFloor();
  void enterElevator();
  void exitElevator();

 private:
  int ID;
};

#endif
