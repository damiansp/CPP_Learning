/* swap.cpp */
// Using string's swap function
#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main() {
  string first("one"),
    second("two");

  cout << "first: " << first << "\tsecond: " << second << endl;

  first.swap(second);

  cout << "After first.swap(second):\n"
       << "first: " << first << "\tsecond: " << second << endl;
  
  return 0;
}
