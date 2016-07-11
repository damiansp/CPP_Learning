/* writeToRandomAccessFile.cpp */
#include <cstdlib>
#include <fstream>
using std::ofstream;

#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;

#include "clientData.hpp"

int main() {
  ofstream outCredit("credit.dat", ios::binary);
  clientData client;

  if (!outCredit) {
    cerr << "File could not be opened." << endl;
    exit(1);
  }

  cout << "Enter account number: "
       << "(1 ~ 100, 0 to end input)\n> ";
  cin >> client.accountNumber;

  while (client.accountNumber > 0 && client.accountNumber <= 100) {
    cout << "Enter last name, first name, balance\n> ";
    cin >> client.lastName >> client.firstName >> client.balance;

    outCredit.seekp((client.accountNumber - 1) * sizeof(clientData));
    outCredit.write(reinterpret_cast<const char*>(&client),
                    sizeof(clientData));

    cout << "Enter account number (0 to end)\n> ";
    cin >> client.accountNumber;
    
  }
  
  return 0;
}
