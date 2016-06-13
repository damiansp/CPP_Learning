/* scheduler.h */
// Scheduler class def
#ifndef SCHEDULER_H
#define SCHEDULER_H

class Floor;

class Scheduler {
 public:
  Scheduler(Floor &, Floor &);
  ~Scheduler();
  void processTime(int);

 private:
  // schedule arrivals to a specified floor
  void scheduleTime(Floor &);

  Floor &floor1Ref;
  Floor &floor2Ref;
  int floor1ArrivalTime,
    floor2ArrivalTime;
};

#endif
