#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;


int main() {
  vector<int> ints;
  int target = 5;
  
  cout << "Initial capacity: " << ints.capacity() << endl;
  for (int i = 0; i < 10; i++) {
    ints.push_back(i);
    cout << "Size after adding: " << ints.size() << endl;
    cout << "Capacity after adding: " << ints.capacity() << endl;
  }

  int offset = (long) &(ints[2]) - (long) &(ints[0]);
  cout << "Memory separation between 2 ints: " << offset << endl;

  for (unsigned i = 0; i < ints.size(); i++) {
    if (target == ints[i]) {
      cout << "Found target at [" << i << "]" << endl;
    }
  }

  return 0;
}
