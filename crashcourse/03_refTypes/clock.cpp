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

  int getYear() { return year; }  
};


void addYearExt(Clock& clock) {
  clock.setYear(clock.getYear() + 1);
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
