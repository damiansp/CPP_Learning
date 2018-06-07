/* cctypeFuncs.cpp */
#include <cctype>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  const int N_CHARS = 11;
  int i;
  char characters[N_CHARS] = {
    '8', '#', 'A', 'b', '&', '4', 'F', 'J', '7', '$', ' ' };

  
  for (i = 0; i < N_CHARS; i++) {
    cout << "isdigit(" << characters[i] << "): " << isdigit(characters[i])
         << "\nisalpha(" << characters[i] << "): " << isalpha(characters[i])
         << "\nisalnum(" << characters[i] << "): " << isalnum(characters[i])
         << "\nisxdigit(" << characters[i] << "): " << isxdigit(characters[i])
         << "\ntoupper(" << characters[i] << "): "
         << static_cast<char>(toupper(characters[i]))
         << "\nisspace(" << characters[i] << "): " << isspace(characters[i])
         << "\nispunct(" << characters[i] << "): " << ispunct(characters[i])
         << "\n\n\n";
  }

  return 0;
}
