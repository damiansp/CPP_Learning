/* elevatorButton.hpp */ 
// ElevatorButton Class Def
#ifndef ELEVATOR_BUTTON_H
#define ELEVATOR_BUTTON_H

#include "button.hpp"

class Elevator; // forward declaration

class ElevatorButton : public Button {
public:
  ElevatorButton(Elevator &);
  ~ElevatorButton();

  void pressButton();
};

#endif
