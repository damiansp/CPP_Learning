/* using strtok */
#include <iostream>
using std::cout;
using std::endl;

#include <cstring>

int main() {
  char string[] = "This song's just 6 words long",
    *tokenPtr;

  cout << "string: " << string << endl;

  tokenPtr = strtok(string, " ");
  
  cout << "tokenPtr: " << tokenPtr << endl;
  cout  << "tokens: " << endl;
  
  while (tokenPtr != NULL)  {
    cout << tokenPtr << endl;
    tokenPtr = strtok(NULL, " ");
  }

  
  return 0;
}
