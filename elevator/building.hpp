/* building.h */
// Building class def
#ifndef BUILDING_H
#define BUILDING_H

#include "elevator.hpp"
#include "floor.hpp"
#include "clock.hpp"
#include "scheduler.hpp"

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
