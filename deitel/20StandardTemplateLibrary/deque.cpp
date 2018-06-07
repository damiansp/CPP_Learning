/* deque.cpp */
// STL deque class
#include <algorithm>
#include <deque>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  std::deque<double> vals;
  std::ostream_iterator<double> output(cout, " ");

  vals.push_front(2.2);
  vals.push_front(3.5);
  vals.push_back(1.1);

  cout << "vals: ";

  for (int i = 0; i < vals.size(); ++i) {
    cout << vals[i] << ' ';
  }

  vals.pop_front();
  cout << "\nAfter pop_front(): ";
  std::copy(vals.begin(), vals.end(), output);

  vals[1] = 5.4;
  cout << "vals[1] = 5.4; vals: ";
  std::copy(vals.begin(), vals.end(), output);
  cout << endl;

  return 0;
}
