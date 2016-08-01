/* boundRange.cpp */
// STL lower_bound, upper_bound and equal_range for sorted vals
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

#include <vector>

int main() {
  const int SIZE = 10;
  int a1[] = { 2, 2, 4, 4, 4, 6, 6, 6, 6, 8 };
  std::vector<int> v(a1, a1 + SIZE);
  std::ostream_iterator<int> output(cout, " ");
  std::vector<int>::iterator lower,
    upper;
  std::pair<std::vector<int>::iterator, std::vector<int>::iterator> eq;
  
  cout << "v: ";
  std::copy(v.begin(), v.end(), output);

  lower = std::lower_bound(v.begin(), v.end(), 6);
  cout << "\n\nLower bound of 6 in v is: " << (lower - v.begin());
  
  upper = std::upper_bound(v.begin(), v.end(), 6);
  cout << "\n\nUpper bound of 6 in v is: " << upper - v.begin();

  eq = std::equal_range(v.begin(), v.end(), 6);
  cout << "\nUsing equal_range:\n"
       << "Lower bound of 6 is element " << (eq.first - v.begin()) 
       << "\nUpper bound of 6 is element " << (eq.second - v.begin());

  cout << "\n\nUse lower_bound to locate the first point at which 5 can be "
       << "\ninserted in order";
  lower = std::lower_bound(v.begin(), v.end(), 5);
  cout << "\nLower bound of 5 is element " << (lower - v.begin());

  cout << "\n\nUse upper_bound to locate the last point at which 7 can be "
       << "\ninserted in order";
  upper = std::upper_bound(v.begin(), v.end(), 7);
  cout << "\nUpper bound of 7 is element " << (upper - v.begin());

  cout << "\n\nUse equal_range to locate first and last places at which 5 can "
       << "\n be inserted in order";
  eq = std::equal_range(v.begin(), v.end(), 5);
  cout << "\nLower bound of 5 is element " << (eq.first - v.begin())
       << "\nUpper bound of 5 is element " << (eq.second - v.begin()) << endl;
  
  return 0;
}
