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


int main() {
  Clock c1;
  printf("c1, default year: %d\n", c1.getYear());

  Clock c2{2025};
  printf("c2: %d\n", c2.getYear());
  
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
