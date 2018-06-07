/* Static arrays */
#include <iostream>
using std::cout;
using std::endl;

void staticArrayInit(void) {
  // Static: will only be initialized once; val saved for next usage.
  static int array1[3]; 

  cout << "\nValues upon entering staticArrayInit():\n";

  for (int i = 0; i < 3; i++) {
    cout << "array1[" << i << "] = " << array1[i] << " ";
  }

  cout << "\nValues on exiting:\n";

  for (int i = 0; i < 3; i++) {
    cout << "array1[" << i << "] = " << (array1[i] += 5) << " ";
  }

  cout << endl;
}

void automaticArrayInit(void) {
  int array2[3] = {1, 2, 3};

  cout << "\n\nValues upon entering automaticArrayInit():\n";

  for (int i = 0; i < 3; i++) {
    cout << "array2[" << i << "] = " << array2[i] << " " ;
  }
  
  cout << "\nValues on exiting:\n";

  for (int i = 0; i < 3; i++) {
    cout << "array2[" << i << "] = " << (array2[i] += 5) << " ";
  }
}




int main() {
  cout << "1st call to each function:\n";
  staticArrayInit();
  automaticArrayInit();

  cout << "\n\n2nd call:\n";
  staticArrayInit();
  automaticArrayInit();
  cout << endl;
  
  return 0;
}
