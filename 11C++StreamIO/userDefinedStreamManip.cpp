/* userDefinedStreamManip.cpp */
// Creating and testing user-defined, nonparameterized stream manipulators
#include <iostream>
using std::cout;
using std::flush;
using std::ostream;

// Bell manipulator (using \a)
ostream& bell(ostream& output) { return output << '\a'; }

// Return manipulator (\r)
ostream& ret(ostream& output) { return output << '\r'; }

// Tab manipulator (\t)
ostream& tab(ostream& output) { return output << '\t'; }

// End line (\n + flush)
ostream& endLine(ostream& output) {
  return output << '\n' << flush;
}

int main() {
  cout << "Testing the tab manipulator:" << endLine
       << 'a' << tab << 'b' << tab << 'c' << endLine
       << "Testing the ret and bell manipulators:" << endLine
       << ".............";
  cout << bell << bell << bell;
  cout << ret << "----------" << endLine;

  return 0;
}
