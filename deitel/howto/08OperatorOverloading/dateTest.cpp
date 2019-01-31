/* dateTest.cpp */
// Driver for Date class (date1.h; date1.cpp)
#include <iostream>
using std::cout;
using std::endl;

#include "date1.h"

int main() {
  Date d1,
    d2(12, 27, 1992),
    d3(0, 99, 8045),
    d4(3, 18, 1969);

  cout << "d1: " << d1 << "\nd2: " << d2 << "\nd3: " << d3 << "\n\n";

  cout << "d2 += 7: " << (d2 += 7) << "\n\n";

  d3.setDate(2, 28, 1992);
  cout << "d3.setDate(2, 28, 1992): " << d3;
  cout << "\n++d3: " << ++d3 << "\n\n";

  cout << "Test pre-increment operator:\nd4:" << d4 << "\n++d4: " << ++d4
       << "\nd4: " << d4 << "\n\n";

  cout << "Test post-increment:\nd4: " << d4 << "\nd4++: " << d4++
       << "\nd4: " << d4 << endl;

  return 0;
}
