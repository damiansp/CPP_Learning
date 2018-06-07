/* readRandomAccessFileSequentially.cpp */
#include <cstdlib>
#include <fstream>
using std::ifstream;
using std::ostream;

#include <iomanip>
using std::resetiosflags;
using std::setiosflags;
using std::setprecision;
using std::setw;

#include <iostream>
using std::cerr;
using std::cout;
using std::endl;
using std::ios;

#include "clientData.hpp"

void outputLine(ostream& output, const clientData& c) {
  output << setiosflags(ios::left) << setw(10) << c.accountNumber
         << setw(25) << c.lastName
         << setw(15) << c.firstName
         << setw(10) << setprecision(2) << resetiosflags(ios::left)
         << setiosflags(ios::fixed | ios::showpoint) << c.balance << '\n';
}



int main() {
  ifstream inCredit("credit.dat", ios::in);
  clientData client;
  
  if (!inCredit) {
    cerr << "File could not be opened." << endl;
    exit(1);
  }

  // Print headers
  cout <<  setiosflags(ios::left) << setw(10) << "Account"
       << setw(25) << "Last name"
       << setw(15) << "First name"
       << resetiosflags(ios::left) << setw(10) << "Balance" << endl;

  // Read next clientData-worth of bytes, and assign to &client
  inCredit.read(reinterpret_cast<char*>(&client), sizeof(clientData));

  // Read through entire file
  while (inCredit && !inCredit.eof()) {
    if (client.accountNumber != 0) {
      // Output the next client, if found
      outputLine(cout, client);
    }

    // Assign next clientData-worth of bytes to &client
    inCredit.read(reinterpret_cast<char*>(&client), sizeof(clientData));
  }
  
  return 0;
}
