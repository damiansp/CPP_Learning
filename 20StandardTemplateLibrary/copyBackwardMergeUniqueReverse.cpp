/* copyBackwardMergeUniqueReverse.cpp */
// STL funcs: copy_backward, merge, unique, reverse
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

#include <vector>

int main() {
  const int SIZE = 5;
  int a1[SIZE] = { 1, 3, 5, 7, 9 };
  int a2[SIZE] = { 2, 4, 5, 7, 9 };
  std::vector<int> v1(a1, a1 + SIZE),
    v2(a2, a2 + SIZE);
  std::ostream_iterator<int> output(cout, " ");

  cout << "v1:\n";
  std::copy(v1.begin(), v1.end(), output);
  cout << "\nv2:\n";
  std::copy(v2.begin(), v2.end(), output);

  // copy_backward
  std::vector<int> results(v1.size());
  std::copy_backward(v1.begin(), v1.end(), results.end());
  cout << "\n\nAfter copy_backward, results:\n";
  std::copy(results.begin(), results.end(), output);

  // merge
  std::vector<int> res2(v1.size() + v2.size());
  std::merge(v1.begin(), v1.end(), v2.begin(), v2.end(), res2.begin());
  cout << "\n\nmerge v1 and v2 int res2:\n";
  std::copy(res2.begin(), res2.end(), output);

  // unique
  std::vector<int>::iterator endLocation;
  endLocation = std::unique(res2.begin(), res2.end());
  cout << "\n\nres2 after unique:\n";
  std::copy(res2.begin(), res2.end(), output);

  // reverse
  cout << "\n\nv1 after reverse:\n";
  std::reverse(v1.begin(), v1.end());
  std::copy(v1.begin(), v1.end(), output);
  cout << endl;
  
  return 0;
}
