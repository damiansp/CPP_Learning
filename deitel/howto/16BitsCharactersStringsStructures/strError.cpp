/* strError.cpp */
// char* strerror(int errornum)
// Maps errornum into a full text string; returns pointer to string
#include <cstring>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  cout << strerror(1) << endl;
  cout << strerror(2) << endl;
}
