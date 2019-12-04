#include <iostream>
using std::cout;
using std::endl;

#include "Game.h"


int main() {
  Game g;

  cout << "Initial game state: " << endl;
  cout << g << endl;
  g.solve();
  
  cout << "Final game state: " << endl;
  cout << g << endl;

  return 0;
}
