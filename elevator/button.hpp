/* button.hpp */
// Button class def
#ifndef BUTTON_H
#define BUTTON_H

class Elevator;

class Button {
public:
  // Constr.
  Button(Elevator&);
  ~Button();

  void pressButton(); // set button to on
  void resetButton(); // reset button to off

protected:
  Elevator& elevatorRef;

private:
  bool pressed; // state of button
  
};

#endif
