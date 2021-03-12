#include <cstdio>


struct Element {
  Element* next{};

  void insertAfter(Element* newElement) {
    newElement->next = next;
    next = newElement;
  }

  char prefix[2];
  short operatingNumber;
};


int main() {
  Element trooper1, trooper2, trooper3;

  trooper1.prefix[0] = 'T';
  trooper1.prefix[1] = 'K';
  trooper1.operatingNumber = 421;
  trooper1.insertAfter(&trooper2);

  trooper2.prefix[0] = 'F';
  trooper2.prefix[1] = 'N';
  trooper2.operatingNumber = 2187;
  trooper2.insertAfter(&trooper3);

  trooper3.prefix[0] = 'L';
  trooper3.prefix[1] = 'S';
  trooper3.operatingNumber = 005;

  for (Element *cursor = &trooper1; cursor; cursor = cursor->next) {
    printf("Trooper %c%c-%03d\n",
           cursor->prefix[0], cursor->prefix[1], cursor->operatingNumber);
  }
  return 0;
}
