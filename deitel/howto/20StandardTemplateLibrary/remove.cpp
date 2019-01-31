/* remove.cpp */
// STL funcs remove, remove_if, remove_copy, and remove_copy_if
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

#include <vector>

bool greater9(int x) {
  return x > 9;
}



int main() {
  const int SIZE = 10;
  int a[SIZE] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };
  std::ostream_iterator<int> output(cout, " ");
  std::vector<int> v(a, a + SIZE);
  std::vector<int>::iterator newLastElement;

  cout << "v: ";
  std::copy(v.begin(), v.end(), output);
  
  // Remove 10s from v
  newLastElement = std::remove(v.begin(), v.end(), 10);
  cout << "\nv after removing all 10s:\n";
  std::copy(v.begin(), v.end(), output);

  std::vector<int> v2(a, a + SIZE),
    c(SIZE, 0);

  cout << "\n\nv2: ";
  std::copy(v2.begin(), v2.end(), output);

  // Copy from v2 to c, removing 10s
  std::remove_copy(v2.begin(), v2.end(), c.begin(), 10);
  cout << "\nv2 after remove_copy of 10s:\n";
  std::copy(v2.begin(), v2.end(), output);
  cout << "\nvector c after remove copy of 10s from v2:\n";
  std::copy(c.begin(), c.end(), output);

  std::vector<int> v3(a, a + SIZE);

  cout << "\n\nv3: ";
  std::copy(v3.begin(), v3.end(), output);

  // Remove elements > 9 from v3
  newLastElement = std::remove_if(v3.begin(), v3.end(), greater9);
  cout << "\nv3 after removing elements > 9:\n";
  std::copy(v3.begin(), v3.end(), output);

  std::vector<int> v4(a, a + SIZE),
    c2(SIZE, 0);

  cout << "\n\nv4: ";
  std::copy(v3.begin(), v3.end(), output);

  // Copy from v4 to c2, removing elems > 9
  std::remove_copy_if(v4.begin(), v4.end(), c2.begin(), greater9);
  cout << "\nv4 after remove copy if > 9:\n ";
  std::copy(v4.begin(), v4.end(), output);
  cout << "\nc2 after remove copy if > 9\n: ";
  std::copy(c2.begin(), c2.end(), output);

  cout << endl;
  
  return 0;
}
