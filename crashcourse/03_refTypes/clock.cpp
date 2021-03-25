#include <cstdio>


class Clock {
  int year; // in class, members are private by default

public:
  Clock(int yr) {
    if (!setYear(yr)) { year = 2021; }
  }

  Clock() {
    setYear(2021);
  }
  
  void addYear() { year++; }

  bool setYear(int yr) {
    if (yr < 2020) return false;
    year = yr;
    return true;
  }

  // a const function must not alter an objects state (like python
  // @staticmethod)
  int getYear() const { return year; }
};


void addYearExt(Clock& clock) {
  clock.setYear(clock.getYear() + 1);
}


// using const here promises not to alter Clock, allowing access to Clock's
// const methods
bool isLeapYear(const Clock& clock) {
  int year = clock.getYear();
  if (year % 4 > 0) return false;
  if (year % 100 > 0) return true;
  if (year % 400 > 0) return false;
}


int main() {
  Clock clock;
  Clock* clockPtr = &clock;

  clockPtr->setYear(2021);
  printf("Address of clock: %p\n", clockPtr);
  printf("Clock year: %d\n", clockPtr->getYear());
  printf("Add year externally...\n");
  addYearExt(clock); // passed by ref
  printf("Clock year: %d\n", clockPtr->getYear());
  return 0;
}
