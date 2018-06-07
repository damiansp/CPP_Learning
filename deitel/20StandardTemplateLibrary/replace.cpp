/* replace.cpp */
// STL funcs replace, replace_if, replace_copy, replace_copy_if
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

#include <vector>

bool moreThan9(int x) {
  return x > 9;
}

int main() {
  const int SIZE = 10;
  int a[SIZE] = { 10, 2, 10, 4, 16, 6, 14, 8, 12, 10 };
  std::ostream_iterator<int> output(cout, " ");
  std::vector<int> v1(a, a + SIZE),
    v2(a, a + SIZE),
    v3(a, a + SIZE),
    v4(a, a + SIZE),
    c1(SIZE),
    c2(SIZE);
  
  cout << "v1: ";
  std::copy(v1.begin(), v1.end(), output);

  // Replace 10s in v1 with 100s
  std::replace(v1.begin(), v1.end(), 10, 100);
  cout << "\nv1 after replace: ";
  std::copy(v1.begin(), v1.end(), output);

  cout << "\n\nv2: ";
  std::copy(v2.begin(), v2.end(), output);

  // Copy v2 to c1, replacing 10s w/ 100s
  std::replace_copy(v2.begin(), v2.end(), c1.begin(), 10, 100);
  cout << "\nv2 and c1 after replace_copy:\nv2: ";
  std::copy(v2.begin(), v2.end(), output);
  cout << "\nc1: ";
  std::copy(c1.begin(), c1.end(), output);

  cout << "\nv3: ";
  std::copy(v3.begin(), v3.end(), output);

  // Replace with 100 if > 9
  std::replace_if(v3.begin(), v3.end(), moreThan9, 100);
  cout << "\nv3 after replace_if:\n";
  std::copy(v3.begin(), v3.end(), output);

  cout << "\n\nv4: ";
  std::copy(v4.begin(), v4.end(), output);

  // Copy v4 to c2, replacing with 100 if > 9
  std::replace_copy_if(v4.begin(), v4.end(), c2.begin(), moreThan9, 100);
  cout << "\nc2 after replace_copy_if from v4:\n";
  std::copy(c2.begin(), c2.end(), output);
  cout << endl;
    
  return 0;
}
