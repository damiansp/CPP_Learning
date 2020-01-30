#include <iostream>
using std::cin;
using std::cout;
using std::endl;


int main() {
  int curVal = 0,
    val = 0;

  if (cin >> curVal) {
    int cnt = 1;
    while (cin >> val) {
      if (val == curVal) { ++cnt; }
      else {
        cout << curVal << " occurs " << cnt << " times" << endl;
        curVal = val;
        cnt = 1;
      }
    }
    cout << curVal << " occurs " << cnt << "times" << endl;
  }

  return 0;
}
