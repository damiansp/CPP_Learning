/* building.h */
// Building class def
#ifndef BUILDING_H
#define BUILDING_H

#include "elevator.h"
#include "floor.h"
#include "clock.h"
#include "scheduler.h"

class Building {
 public:
  Building();
  ~Building();

  void runSimulation(int runTime);

 private:
  Floor floor1, floor2;
  Elevator elevator;
  Clock clock;
  Scheduler scheduler;
};

#endif
