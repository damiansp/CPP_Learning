#include <iostream>

using namespace std;


int main() {
  int matrix3x3[3][3] = {{-501, 205, 2106}, {989, 101, 206}, {303, 456, 596}};

  cout << "Diagonal: " << matrix3x3[0][0] << ", " << matrix3x3[1][1] << ", "
       << matrix3x3 [2][2] << endl;
  return 0;
}
