/* payroll.cpp */
// Driver for Employee class hierarchy
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::ios;
using std::setiosflags;
using std::setprecision;

#include "boss2.hpp"
#include "commission2.hpp"
#include "employee2.hpp"
#include "hourly2.hpp"
#include "piece2.hpp"

// Make virtual func calls off a base-class pointer using dynamic binding
void virtualViaPointer(const Employee* baseClassPtr) {
  baseClassPtr -> print();
  cout << " earned $" << baseClassPtr -> earnings() << '\n';
}

// Make virtual func calls off a base-class reference using dynamic binding
void virtualViaReference(const Employee& baseClassRef) {
  baseClassRef.print();
  cout << " earned $" << baseClassRef.earnings() << '\n';
}



int main() {
  // set output formatting
  cout << setiosflags(ios::fixed | ios::showpoint) << setprecision(2);

  Boss b("Javier", "Jefe", 800.00);
  b.print();                           // static binding
  cout << " earned $" << b.earnings() << endl; // static binding
  virtualViaPointer(&b);   // uses dynamic binding
  virtualViaReference(b); // uses dynamic binding...

  CommissionWorker c("Conrad", "Commie", 200.0, 3.0, 150);
  c.print();
  cout << " earned $" << c.earnings() << endl;
  virtualViaPointer(&c);
  virtualViaReference(c);

  PieceWorker p("Pauline", "LaPaz", 2.5, 500);
  p.print();
  cout << " earned $" << p.earnings() << endl;
  virtualViaPointer(&p);
  virtualViaReference(p);

  HourlyWorker h("Horace", "Manly", 13.75, 43);
  h.print();
  cout << " earned $" << h.earnings() << endl;
  virtualViaPointer(&h);
  virtualViaReference(h);
  cout << endl;
  
  return 0;
}
