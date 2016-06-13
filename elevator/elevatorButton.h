/* elevatorButton.h */ 
// ElevatorButton Class Def
#ifndef ELEVATOR_BUTTON_H
#define ELEVATOR_BUTTON_H

class Elevator; // forward declaration

class ElevatorButton {
 public:
  ElevatorButton(Elevator &);
  ~ElevatorButton();

  void pressButton();
  void resetButton();

 private:
  bool pressed;

  // Ref to button's elevator
  Elevator &elevatorRef;
};

#endif
