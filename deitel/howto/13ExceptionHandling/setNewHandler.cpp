/* setNewHandler.cpp */
// Demo set_new_handler
#include <iostream>
using std::cout;
using std::cerr;

#include <new>
#include <cstdlib>
using std::set_new_handler;

void customNewHandler() {
  cerr << "costumNewHandler() called\n";
  abort();
}

int main() {
  double* ptr[50];
  set_new_handler(customNewHandler);

  for (int i = 0; i < 50; i++) {
    ptr[i] = new double[5000000000000];

    cout << "Allocated 5,000,000,000,000 doubles in ptr[" << i << "]\n";
  }

  return 0;
}
