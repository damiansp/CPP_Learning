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
  void scheduleTime(const Floor &);

  // delay arrival to a floor
  void delayTime(const Floor &);

  // handle person's arrival on a floor
  void handleArrivals(Floor &, int);

  

  Floor &floor1Ref;
  Floor &floor2Ref;
  int currentClockTime,
    floor1ArrivalTime,
    floor2ArrivalTime;
};

#endif
