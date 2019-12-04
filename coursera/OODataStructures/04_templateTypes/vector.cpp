#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;


int main() {
  vector<int> v;

  for (int i = 0; i < 20; i++) { v.push_back(i * i); }
  cout << v[13] << endl;
  return 0;
}
