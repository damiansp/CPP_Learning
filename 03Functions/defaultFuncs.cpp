/* Using default arguments */
#include <iostream>
using std::cout;
using std::endl;


int boxVolume(int length = 1, int width = 1, int height = 1) {
  return length * width * height;
}



int main() {
  cout << "boxVolume(): " << boxVolume() << endl;
  cout << "boxVolume(2, 7): " << boxVolume(2, 7) << endl;
  // cout << "boxVolume(height = 5): " << boxVolume(height = 5) << endl; // :(
  

  return 0;
}
