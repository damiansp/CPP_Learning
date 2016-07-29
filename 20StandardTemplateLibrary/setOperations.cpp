/* setOperations.cpp */
// STL: includes, set_difference, set_intersection, set_symmetric_difference,
// set_union
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  const int S1 = 10,
    S2 = 5,
    S3 = 20;
  int a1[S1] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
  int a2[S2] = { 4, 5, 6, 7, 8 };
  int a3[S2] = { 4, 5, 6, 11, 15 };
  std::ostream_iterator<int> output(cout, " ");

  cout << "a1:\n";
  std::copy(a1, a1 + S1, output);
  cout << "\na2:\n";
  std::copy(a2, a2 + S2, output);
  cout << "\na3:\n";
  std::copy(a3, a3 + S2, output);

  if (std::includes(a1, a1 + S1, a2, a2 + S2)) {
    cout << "\na1 includes a2";
  } else {
    cout << "\na1 does not include a2";
  }

  if (std::includes(a1, a1 + S1, a3, a3 + S2)) {
    cout << "\na1 includes a3";
  } else {
    cout << "\na1 does not include a3";
  }

  int difference[S1];
  int* ptr = std::set_difference(a1, a1 + S1, a2, a2 + S2, difference);
  cout << "\nset_difference of a1 and a2:\n";
  std::copy(difference, ptr, output);

  int intersection[S1];
  ptr = std::set_intersection(a1, a1 + S1, a2, a2 + S2, intersection);
  cout << "\nset_intersection of a1 and a2:\n";
  std::copy(intersection, ptr, output);

  int symmetric_difference[S1];
  ptr = std::set_symmetric_difference(
    a1, a1 + S1, a2, a2 + S2, symmetric_difference);
  cout << "\nset_symmetric_difference of a1 and a2:\n";
  std::copy(symmetric_difference, ptr, output);

  int unionSet[S3];
  ptr = std::set_union(a1, a1 + S1, a3, a3 + S2, unionSet);
  cout << "\nset_union of a1 and a2:\n";
  std::copy(unionSet, ptr, output);
  cout << endl;

  return 0;
}
