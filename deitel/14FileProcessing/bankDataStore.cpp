/* bankDataStore.cpp */
// Reads a random acces file sequentially; updates data already written;
// creates new data; deletes data
#include <cstdlib>
#include <fstream>
using std::fstream;
using std::ofstream;
using std::ostream;

#include <iomanip>
using std::resetiosflags;
using std::setiosflags;
using std::setprecision;
using std::setw;

#include <iostream>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;
using std::ios;

#include "clientData.hpp"

enum Choices { TEXTFILE = 1, UPDATE, NEW, DELETE, END };

// Prompt user for operation choice
int enterChoice() {
  int menuChoice;
    
  cout << "\nEnter option:" << endl
       << "1 - store a formatted text file of accounts (\"print.txt\") for "
       << "printing\n"
       << "2 - update an account\n"
       << "3 - add a new account\n"
       << "4 - delete an account\n"
       << "5 - exit\n> ";

  cin >> menuChoice;
  return menuChoice;
}

void outputLine(ostream& output, const clientData& c) {
  output << setiosflags(ios::left) << setw(10) << c.accountNumber
         << setw(25) << c.lastName
         << setw(15) << c.firstName
         << setw(10) << setprecision(2) << resetiosflags(ios::left)
         << setiosflags(ios::fixed | ios::showpoint) << c.balance << '\n';
}

// Create a formatted text file for printing
void textFile(fstream& readFromFile) {
  ofstream outPrintFile("print.txt", ios::out);
  clientData client;
  
  if (!outPrintFile) {
    cerr << "File could not be opened." << endl;
    exit(1);
  }

  // Generate file headers
  outPrintFile << setiosflags(ios::left) << setw(10) << "Account"
               << setw(25) << "Last Name"
               << setw(15) << "First Name"
               << resetiosflags(ios::left) << setw(10) << "Balance" << endl;

  readFromFile.seekg(0);
  readFromFile.read(reinterpret_cast<char*>(&client), sizeof(clientData));

  while (!readFromFile.eof()) {
    if (client.accountNumber != 0) {
      outputLine(outPrintFile, client);
    }

    readFromFile.read(reinterpret_cast<char*>(&client), sizeof(clientData));
  }
}

int getAccount(const char* const prompt) {
  int account;

  do {
    cout << prompt << " (1 - 100): ";
    cin >> account;
  } while (account < 1 || account > 100);

  return account;
}

void updateRecord(fstream& updateFile) {
  int account = getAccount("Enter account number to update");
  clientData client;

  updateFile.seekg((account - 1) * sizeof(clientData));
  updateFile.read(reinterpret_cast<char*>(&client), sizeof(clientData));

  if (client.accountNumber != 0) {
    double transaction;
    
    outputLine(cout, client);
    cout << "\nEnter charge (+) or payment (-): ";
    cin >> transaction; // should validate...
    client.balance += transaction;
    outputLine(cout, client);
    updateFile.seekp((account - 1) * sizeof(clientData));
    updateFile.write(reinterpret_cast<const char*>(&client),
                     sizeof(clientData));
  } else {
    cerr << "Account #" << account << " has not information." << endl;
  }
}

void newRecord(fstream& insertInFile) {
  int account = getAccount("Enter new account number");
  clientData client;
  
  insertInFile.seekg((account - 1) * sizeof(clientData));
  insertInFile.read(reinterpret_cast<char*>(&client), sizeof(clientData));

  if (client.accountNumber == 0) {
    cout << "Enter: last name, first name, balance\n> ";
    cin >> client.lastName >> client.firstName >> client.balance;

    client.accountNumber = account;
    insertInFile.seekp((account - 1) * sizeof(clientData));
    insertInFile.write(reinterpret_cast<const char*>(&client),
                       sizeof(clientData));
  } else {
    cerr << "Account #" << account << " already contains information." << endl;
  }
}

void deleteRecord(fstream& deleteFromFile) {
  int account = getAccount("Enter account to delete");
  clientData client;

  deleteFromFile.seekg((account - 1) * sizeof(clientData));
  deleteFromFile.read(reinterpret_cast<char*>(&client), sizeof(clientData));

  if (client.accountNumber != 0) {
    clientData bankClient = { 0, "", "", 0.0 };

    deleteFromFile.seekp((account - 1) * sizeof(clientData));
    deleteFromFile.write(reinterpret_cast<const char*>(&bankClient),
                         sizeof(clientData));

    cout << "Account #" << account << " was deleted." << endl;
  } else {
    cerr << "Accoutn #" << account << " is empty." << endl;
  }
}





int main() {
  fstream inOutCredit("credit.dat", ios::in | ios::out);
  int choice;

  if (!inOutCredit) {
    cerr << "File could not be opened." << endl;
    exit(1);
  }

  while ((choice = enterChoice()) != END) {
    switch (choice) {
    case TEXTFILE:
      textFile(inOutCredit); break;
    case UPDATE:
      updateRecord(inOutCredit); break;
    case NEW:
      newRecord(inOutCredit); break;
    case DELETE:
      deleteRecord(inOutCredit); break;
    default:
      cerr << "Invalid choice\n"; break;
    }

    inOutCredit.clear(); // reset eof indicator
  }
  
  return 0;
}
