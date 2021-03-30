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


struct Avout {
  const char* name;
  Clock apert;

  Avout(const char* name, int apertYear)
    // this.name = name; this.apertYear = apert
    : name {name}, apert {apertYear} { 
  }
  
  void announce() const {
    printf("My name is %s and my next apert is %d.\n", name, apert.getYear());
  }
};


int main() {
  Avout raz{"Erasmus", 3010};
  Avout jad{"Jad", 4000};
  raz.announce();
  jad.announce();
}
