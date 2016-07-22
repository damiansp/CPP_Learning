/* iterators.cpp */
// Demo input and output with iterators
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <iterator>


int main() {
  cout << "Enter two integers: ";

  std::istream_iterator<int> inputInt(cin);
  int n1, n2;

  n1 = *inputInt; // read first int from standard in
  ++inputInt;     // move iterator to next val
  n2 = *inputInt; // read next in from std in

  cout << "Their sum is: ";
  
  std::ostream_iterator<int> outputInt(cout);
  
  *outputInt = n1 + n2; // output result to cout
  cout << endl;
  
  return 0;
}
