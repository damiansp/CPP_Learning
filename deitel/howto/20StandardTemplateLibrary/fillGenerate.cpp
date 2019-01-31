/* fillGenerate.cpp */
// Demo fill, fill_n, generate and generate_n STL methods
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

#include <vector>

char nextLetter() {
  static char letter = 'A';
  return letter++;
}



int main() {
  std::vector<char> chars(10);
  std::ostream_iterator<char> output(cout, " ");

  std::fill(chars.begin(), chars.end(), '5'); // fills vector with 5s
  cout << "vector chars after filling with 5s:\n";
  std::copy(chars.begin(), chars.end(), output);

  std::fill_n(chars.begin(), 5, 'A'); // fill first 5 items with As
  cout << "\nvector chars after filling five elements with As\n";
  std::copy(chars.begin(), chars.end(), output);

  // Call nextLetter for each elem in chars
  std::generate(chars.begin(), chars.end(), nextLetter);
  cout << "\nvector chars after generate calls nextLetter() for each element:"
       << "\n";
  std::copy(chars.begin(), chars.end(), output);

  std::generate_n(chars.begin(), 5, nextLetter);
  cout << "\nvector chars after generate_n makes 5 calls to nextLetter():\n";
  std::copy(chars.begin(), chars.end(), output);

  cout << endl;
  
  return 0;
}
