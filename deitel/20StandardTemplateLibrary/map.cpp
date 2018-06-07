/* map.cpp */
// STL map class
#include <iostream>
using std::cout;
using std::endl;

#include <map>

int main() {
  typedef std::map<int, double, std::less<int> > mid;
  mid pairs;

  pairs.insert(mid::value_type(15, 2.7));
  pairs.insert(mid::value_type(30, 1.1));
  pairs.insert(mid::value_type(5, 1010.1));
  pairs.insert(mid::value_type(10, 22.22));
  pairs.insert(mid::value_type(25, 33.333));
  pairs.insert(mid::value_type(5, 77.54));
  pairs.insert(mid::value_type(20, 9.876));
  pairs.insert(mid::value_type(15, 99.9));

  cout << "pairs contains:\nKey\tValue\n";

  mid::const_iterator iter;

  for (iter = pairs.begin(); iter != pairs.end(); ++iter) {
    cout << iter->first << '\t' << iter->second << '\n';
  }

  pairs[25] = 9999.99; // changes value for key 25
  pairs[40] = 4.4444;  // insert new val with key 40
  cout << "\nAfter subscript operations, pairs:\nKey\tValue\n";

  for (iter = pairs.begin(); iter != pairs.end(); ++iter) {
    cout << iter->first << '\t' << iter->second << '\n';
  }

  cout << endl;
  
  return 0;
}
