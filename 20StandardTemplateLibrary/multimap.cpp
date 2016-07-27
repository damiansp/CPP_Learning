/* multimap.cpp */
// STL class multimap
#include <iostream>
using std::cout;
using std::endl;

#include <map>

int main() {
  typedef std::multimap<int, double, std::less<int> > mmid;
  mmid pairs;

  cout << "There are currently " << pairs.count(15)
       << " pairs with key 15 in the multimap\n";

  pairs.insert(mmid::value_type(15, 2.7));
  pairs.insert(mmid::value_type(15, 99.3));

  cout << "After inserts, there are " << pairs.count(15)
       << " pairs with the key 15 in the multimap\n";

  pairs.insert(mmid::value_type(30, 111.11));
  pairs.insert(mmid::value_type(10, 22.22));
  pairs.insert(mmid::value_type(25, 33.333));
  pairs.insert(mmid::value_type(20, 9.345));
  pairs.insert(mmid::value_type(5, 77.54));

  cout << "Multimap pairs contains:\nKey\tValue\n";

  for (
    mmid::const_iterator iter = pairs.begin(); iter != pairs.end(); ++iter) {
    cout << iter->first << '\t' << iter->second << '\n';
  }

  cout << endl;
  
  return 0;
}
