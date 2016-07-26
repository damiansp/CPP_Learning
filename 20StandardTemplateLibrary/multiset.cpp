/* multiset.cpp */
// STL multiset class
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

#include <set>

int main() {
  const int SIZE = 10;
  int a[SIZE] = { 11, 3, 76, 3, 13, 80, 8, 5, 82, 11 };
  typedef std::multiset<int, std::less<int> > ims;
  ims intMultiset;
  std::ostream_iterator<int> output(cout, " ");

  cout << "There are currently " << intMultiset.count(15)
       << " values of 15 in the multiset\n";
  intMultiset.insert(15);
  intMultiset.insert(15);

  cout << "After inserts, there are "
       << intMultiset.count(15)
       << " values of 15\n";

  ims::const_iterator result;

  result = intMultiset.find(15);

  if (result != intMultiset.end()) {
    cout << "Found value 15\n";
  }

  result = intMultiset.find(20);

  if (result == intMultiset.end()) {
    cout << "Did not find value 20\n";
  }

  intMultiset.insert(a, a + SIZE);
  cout << "After insert:\n";
  std::copy(intMultiset.begin(), intMultiset.end(), output);

  cout << "\nLower bound of 11: "
       << *(intMultiset.lower_bound(11));
  cout << "\nUpper bound of 11: "
       << *(intMultiset.upper_bound(11));

  std::pair<ims::const_iterator, ims::const_iterator> p;

  p = intMultiset.equal_range(11);
  cout << "\nUsing equal_range of 11\n"
       << "Lower bound: " << *(p.first)
       << "\nUpper bound: " << *(p.second);

  cout << endl;
  
  return 0;
}
