/* floorButton.h */
// FloorButton class def
#ifndef FLOOR_BUTTON_H
#define FLOOR_BUTTON_H

class Elevator;

class FloorButton {
 public:
  FloorButton(int, Elevator &);
  ~FloorButton();

  void pressButton();
  void resetButton();

 private:
  int floorNumber;
  bool pressed;

  // Ref to button's elevator
  Elevator &elevatorRef;
};

#endif
