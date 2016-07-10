/* creditInquiry.cpp */
#include <cstdlib>
#include <fstream>
using std::ifstream;

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

enum RequestType { ZERO_BALANCE = 1, CREDIT_BALANCE, DEBIT_BALANCE, END };

int getRequest() {
  int request;

  /* 
  do {
    cout << "\n> ";
    cin >> request;
  } while (request < ZERO_BALANCE && request > END);
  */
  cout << "\n> ";
  cin >> request;

  return request;
}

bool shouldDisplay(int type, double balance) {
  if (type == CREDIT_BALANCE && balance < 0) { return true; }
  if (type == DEBIT_BALANCE && balance > 0)  { return true; }
  if (type == ZERO_BALANCE && balance == 0)  { return true; }

  return false;
}

void outputLine(int acct, const char* const name, double bal) {
  cout << setiosflags(ios::left) << setw(10) << acct
       << setw(13) << name
       << setw(7) << setprecision(2) << resetiosflags(ios::left) << bal
       << '\n';
}



int main() {
  int request, account;
  char name[30];
  double balance;
  
  // ifstream constr opens file
  ifstream inClientFile("clients.dat", ios::in);

  if (!inClientFile) {
    cerr << "File could not be opened." << endl;
    exit(1);
  }

  cout << "Enter request\n"
       << " 1: List accounts with zero balance\n"
       << " 2: List accounts with credit balance\n"
       << " 3: List accounts with debit balance\n"
       << " 4: End"
       << setiosflags(ios::fixed | ios::showpoint);
  request = getRequest();

  while (request != END) {
    switch (request) {
    case ZERO_BALANCE:
      cout << "\nAccounts with 0 balance:\n"; break;
    case CREDIT_BALANCE:
      cout << "\nAccounts wtih negative balance\n"; break;
    case DEBIT_BALANCE:
      cout << "\nAccounts with positive balance\n"; break;
    default:
      cout << "Fix bug in program\n"; break;
    }

    inClientFile >> account >> name >> balance;

    while (!inClientFile.eof()) {
      if (shouldDisplay(request, balance)) {
        outputLine(account, name, balance);
      }

      inClientFile >> account >> name >> balance;
    }

    inClientFile.clear(); // reset eof for next input
    inClientFile.seekg(0); // reset to beginning of file
    request = getRequest();
    
  }

  cout << "End of program" << endl;
  
  return 0;
}
