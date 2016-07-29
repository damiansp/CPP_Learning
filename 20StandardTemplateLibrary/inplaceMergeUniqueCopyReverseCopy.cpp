/* inplaceMergeUniqueCopyReverseCopy.cpp */
// STL Funcs inplace_merge, unique_copy, reverse_copy
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

#include <iterator>
#include <vector>

int main() {
  const int SIZE = 10;
  int a1[SIZE] = { 1, 3, 5, 7, 9, 1, 3, 5, 7, 9 };
  std::vector<int> v1(a1, a1 + SIZE);
  std::ostream_iterator<int> output(cout, " ");

  cout << "v1: ";
  std::copy(v1.begin(), v1.end(), output);

  // inplace_merge
  std::inplace_merge(v1.begin(), v1.begin() + 5, v1.end());
  cout << "\n\n> std::inplace_merge(v1.begin(), v1.begin() + 5, v1.end());\n";
  std::copy(v1.begin(), v1.end(), output);

  // unique_copy
  std::vector<int> res1;
  // back_inserter makes sure vector length grows to accomodate
  std::unique_copy(v1.begin(), v1.end(), std::back_inserter(res1));
  cout << "\n\n> std::unique_copy(v1.begin(),"
       << " v1.end(), std::back_inserter(res1));\n";
  std::copy(res1.begin(), res1.end(), output);
  
  // reverse_copy
  std::vector<int> res2;
  std::reverse_copy(v1.begin(), v1.end(), std::back_inserter(res2));
  cout << "\n\n> std::reverse_copy(v1.begin(), v1.end(), "
       << "std::back_inserter(res2));\n";
  std::copy(res2.begin(), res2.end(), output);
  cout << endl;
  
  return 0;
}
