struct Element {
  Element* next{};

  void insertAfter(Element* newEl) {
    newEl->next = this->next;
    this->next = newEl;
  }

  char prefix[2];
  short opNumber;
}
