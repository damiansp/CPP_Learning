/* building.h */
// Building class def
#ifndef BUILDING_H
#define BUILDING_H

class Building {
 public:
  Building();
  ~Building();

  void runSimulator(int runTime);

 private:
  // TO DO: inlcude other objects: clock, scheduler, elevator, floor...
};

#endif BUILDING_H
