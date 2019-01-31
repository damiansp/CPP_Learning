/* Salesperson class def */
#ifndef SALESP_H
#define SALESP_H

class SalesPerson {
 public:
  SalesPerson();
  void getSalesFromUser(); // get sales figure from user
  void setSales(int, double); // User supplied one-month's sales
  void printAnnualSales();

 private:
  double totalAnnualSales(); // util function
  double sales[12];          // monthly sales figs
};

#endif
