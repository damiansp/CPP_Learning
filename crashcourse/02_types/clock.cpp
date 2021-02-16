#include <cstdio>


class Clock {
  int year; // in class, members are private by default

public:
  void addYear() { year++; }

  bool setYear(int yr) {
    if (yr < 2020) return false;
    year = yr;
    return true;
  }

  int getYear() { return year; }  
};


int main() {
  Clock clock;
  if (!clock.setYear(2019)) { // fails
    clock.setYear(2020);
  }
  clock.addYear();
  printf("Year: %d\n", clock.getYear());
  clock.addYear();
  printf("Year: %d\n", clock.getYear());
  return 0;
}
