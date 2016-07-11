/* clientData.hpp */
// Definition of struct clientData
#ifndef CLIENT_DATA_HPP
#define CLIENT_DATA_HPP

struct clientData {
  int accountNumber;
  char lastName[25],
    firstName[15];
  double balance;
};

#endif
