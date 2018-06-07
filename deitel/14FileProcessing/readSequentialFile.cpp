/* readSequentialFile.cpp */
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

void outputLine(int acct, const char* const name, double bal) {
  cout << setiosflags(ios::left) << setw(10) << acct
       << setw(13) << name
       << setw(7) << setprecision(2) << resetiosflags(ios::left) << bal
       << '\n';
}



int main() {
  int account;
  char name[30];
  double balance;

  // ifstream constructor opens the file
  ifstream inClientFile("clients.dat", ios::in);

  if (!inClientFile) {
    cerr << "File could not be opened\n";
    exit(1);
  }

  cout << setiosflags(ios::left) << setw(10) << "Account"
       << setw(13) << "Name" << "Balance\n"
       << setiosflags(ios::fixed | ios::showpoint);

  while (inClientFile >> account >> name >> balance) {
    outputLine(account, name, balance);
  }
  
  return 0;
}
