/* rtti.cpp */
// Demo of run-time type information (rtti) typeid
#include <iostream>
using std::cout;
using std::endl;

#include <typeinfo>

template <typename T>
T maximum(T val1, T val2, T val3) {
  T max = val1;

  if (val2 > max) { max = val2; }
  if (val3 > max) { max = val3; }

  // get the name of the type
  const char* dataType = typeid(T).name();

  cout << dataType << "s were compared.\nMax " << dataType << " is ";

  return max;
}



int main() {
  int a = 8,
    b = 88,
    c = 22;
  double d = 95.05,
    e = 78.77,
    f = 83.83;

  cout << maximum(a, b, c) << '\n';
  cout << maximum(d, e, f) << endl;

  return 0;
}
