/* interface.h */
// Header file for interface.cpp; Interface is proxy class for Implementation

class Implementation;

class Interface {
 public:
  Interface(int);
  ~Interface();
  
  void setValue(int);
  int getValue() const;

 private:
  Implementation *ptr; 
};
