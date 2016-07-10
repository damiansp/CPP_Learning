/* sequentialFileCreation.cpp */
#include <cstdlib>

#include <fstream>
using std::ofstream;

#include <iostream>
using std::cin;
using std::cerr;
using std::cout;
using std::endl;
using std::ios;

int main() {
  int account;
  char name[30];
  double balance;
  
  // ofstream constr opens file
  // (filename, file open mode = {ios::out, ios::app, ios::binary})
  // ios::out is default-- can be omitted
  // NOTE: Using an existing file name will overwrite w/o warning
  ofstream outClientFile("clients.dat", ios::out);  

  if (!outClientFile) {
    cerr << "File could not be opened" << endl;
    exit(1); // prototype in cstdlib
  }

  cout << "Enter the account, name, and balance.\n"
       << "Enter EOF to end input.\n> ";

  while (cin >> account >> name >> balance) {
    outClientFile << account << ' ' << name << ' ' << balance << '\n';
    cout << "> ";
  }

  return 0;  // ofstream destructor closes file
}
