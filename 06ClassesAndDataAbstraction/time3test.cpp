/* time3test.cpp */
// Test the Time class (time3.h, time3.cpp)
#include <iostream>
using std::cout;
using std::endl;

#include "time3.h"

void incrementMinutes(Time &tt, const int count) {
  cout << "Incrementing minute " << count << "times:\nStart time: ";
  tt.printStandard();

  for (int i = 0; i < count; i++) {
    tt.setMinute((tt.getMinute() + 1) % 60);

    if (tt.getMinute() == 0) {
      tt.setHour((tt.getHour() + 1) % 24);
    }

    cout << "\nminute + 1: ";
    tt.printStandard();
  }

  cout << endl;
}



int main() {
  Time t;

  t.setHour(17);
  t.setMinute(34);
  t.setSecond(25);

  cout << "t using valid setters:\n"
       << "  Hour: "   << t.getHour()
       << "  Minute: " << t.getMinute()
       << "  Second: " << t.getSecond() << endl << endl;

  t.setTime(11, 58, 0);
  incrementMinutes(t, 3);
    
  return 0;
}
