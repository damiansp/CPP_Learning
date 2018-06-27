#include <iostream>
#include <string>

using namespace std;


int main() {
  string greetString = "Hello std::string!";
  string firstLine;
  string secondLine;

  cout << greetString << endl;
  cout << "Enter a line of text: " << endl;
  getline(cin, firstLine);
  cout << "Enter another: " << endl;
  getline(cin, secondLine);
  cout << "Result of concatenation: " << endl;

  string concatString = firstLine + " " + secondLine;

  cout << concatString << endl;
  cout << "Copy of concatenated string: " << endl;

  string aCopy = concatString;

  cout << aCopy << endl;
  cout << "Length of concat string: " << concatString.length() << endl;
  return 0;
}
