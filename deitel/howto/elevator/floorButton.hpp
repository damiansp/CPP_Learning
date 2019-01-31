/* floorButton.hpp */
// FloorButton class def
#ifndef FLOOR_BUTTON_H
#define FLOOR_BUTTON_H

#include "button.hpp"

class Elevator;

class FloorButton : public Button {
public:
  FloorButton(const int, Elevator &);
  ~FloorButton();

  void pressButton();

private:
  int floorNumber;
};

#endif
