/* fill.cpp */
// Using fill member function and setfill manipulator to change the padding
// char for fields larger thna value being printed
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::dec;
using std::hex;
using std::ios;
using std::setfill;
using std::setw;

int main() {
  int x = 10000;

  cout << x << " printed as int r- and l-justified\n"
       << "and as hex with internal justification.\n"
       << "Using the default pad character (space):\n";
  cout.setf(ios::showbase);
  cout << setw(10) << x << '\n';
  cout.setf(ios::left, ios::adjustfield);
  cout << setw(10) << x << '\n';
  cout.setf(ios::internal, ios::adjustfield);
  cout << setw(10) << hex << x;

  cout << "\n\nUsing padding characters\n";
  cout.setf(ios::right, ios::adjustfield);
  cout.fill('*');
  cout << setw(10) << dec << x << '\n';
  cout.setf(ios::left, ios::adjustfield);
  cout << setw(10) << setfill('~') << x << '\n';
  cout.setf(ios::internal, ios::adjustfield);
  cout << setw(10) << setfill('>') << hex << x << endl;
  
  return 0;
}
