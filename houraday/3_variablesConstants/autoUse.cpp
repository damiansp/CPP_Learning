#include <iostream>

using namespace std;


int main() {
  auto heads = true;
  auto largeNumber = 2500000000000;

  cout << "heads = " << heads << " (" << sizeof(heads) << " bytes)" << endl;
  cout << "largeNumber = " << largeNumber << " (" << sizeof(largeNumber)
       << " bytes)" << endl;
  return 0;  
}
