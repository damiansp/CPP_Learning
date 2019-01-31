/* searchSort.cpp */
// STL search and sort
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

#include <vector>

bool moreThan10(int x) { return x > 10; }

int main() {
  const int SIZE = 10;
  int a[SIZE] = { 10, 2, 17, 5, 16, 8, 13, 11, 20, 7 };
  std::vector<int> v(a, a + SIZE);
  std::ostream_iterator<int> output(cout, " ");
  std::vector<int>::iterator location;
  
  cout << "v: ";
  std::copy(v.begin(), v.end(), output);

  // Find location of 16
  location = std::find(v.begin(), v.end(), 16);

  if (location != v.end()) {
    cout << "\n\nFound 16 at location " << (location - v.begin());
  } else {
    cout << "\n\n16 not found\n";
  }

  location = std::find(v.begin(), v.end(), 100);

  if (location != v.end()) {
    cout << "\n\nFound 100 at location " << (location - v.begin());
  } else {
    cout << "\n\n100 not found\n";
  }

  // Sort
  std::sort(v.begin(), v.end());
  cout << "\n\nv after sort(): ";
  std::copy(v.begin(), v.end(), output);

  // Search (binary)
  if (std::binary_search(v.begin(), v.end(), 13)) {
    cout << "\n\n13 found in v";
  } else {
    cout << "\n\n13 not found in v";
  }

  cout << "\n\n100 "
       << (std::binary_search(v.begin(), v.end(), 100) ? "" : "not ")
       << "found in v\n";
  
  return 0;
}
