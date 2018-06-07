/* justify.cpp */
// Left and right text justification
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::ios;
using std::resetiosflags;
using std::setiosflags;
using std::setw;

int main() {
  int x = 12345,
    y = 6789;

  cout << "Default is right-justified:\n"
       << setw(10) << x << endl
       << setw(10) << y
       << "\n\nUSING MEMBER FUNCTIONS\nUse setf to set ios::left:\n"
       << setw(10);

  cout.setf(ios::left, ios::adjustfield);
  cout << x << endl << setw(10)
       << y << "\nUse unsetf to restore default:\n";
  cout.unsetf(ios::left);
  cout << setw(10) << x << '\n' << setw(10) << y
       << "\n\nUSING PARAMETERIZED STREAM MANIPULATORS"
       << "\nUse setiosflags to set ios::left:\n"
       << setw(10) << setiosflags(ios::left) << x << '\n' << setw(10) << y
       << "\nUse resetiosflags to restore default:\n"
       << setw(10) << resetiosflags(ios::left) << x << '\n' << setw(10) << y
       << endl;
  
  return 0;
}
