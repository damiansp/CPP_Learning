// Will not compile
#include <iostream>
#include <string.h>

using namespace std;


int main() {
  char userInput[21] = {'\0'};
  cout << "Enter a word NO MORE THAN 20 characters: " << endl;
  cin >> userInput;
  cout << "Input length: " << strlen(userInput) << endl;
  return 0;
}
