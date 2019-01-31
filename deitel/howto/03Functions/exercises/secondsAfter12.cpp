/* given time as 3 ints: hour, min, sec, calculate number of secs since 
 * 12:00:00 */
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int minutesToSeconds(int min) {
  return min * 60;
}

int hoursToSeconds(int hr) {
  return hr * 60 * 60;
}



int main() {
  int hours,
    minutes,
    seconds,
    totalSeconds = 0;

  cout << "Enter the time as 3 ints: (e.g. 8:30:26 shoule be 8 30 26): ";
  cin >> hours >> minutes >> seconds;

  if (hours > 12 || minutes > 59 || seconds > 59 ||
      hours < 0 || minutes < 0 || seconds < 0) {
    cout << "Bad input." << endl;

    return 1;
  }
  
  totalSeconds += seconds;
  totalSeconds += minutesToSeconds(minutes);
  totalSeconds += hoursToSeconds(hours);

  cout << totalSeconds << (totalSeconds == 1 ? " second has" : " seconds have")
       << " elapsed since 12:00:00" << endl;
  
  
  return 0;
}
