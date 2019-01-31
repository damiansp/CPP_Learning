/* createRandomAccessFile.cpp */
#include <cstdlib>
#include <fstream>
using std::ofstream;

#include <iostream>
using std::cerr;
using std::endl;
using std::ios;

#include "clientData.hpp"

int main() {
  // Initialize file
  ofstream outCredit("credit.dat", ios::binary);
  clientData bankClient = { 0, "", "", 0.0 }; //acct, surname, name, balance
  
  if (!outCredit) {
    cerr << "File could not be opened." << endl;
    exit(1);
  }

  for (int i = 0; i < 100; i++) {
    // Cause bankClient struct of size sizeof(clientData) to be written to
    // credit.dat file
    outCredit.write(reinterpret_cast<const char*>(&bankClient),
                    sizeof(clientData));
  }
  
  return 0;
}
