/* bitfield.cpp */
#include <iomanip>
using std::setw;

#include <iostream>
using std::cout;
using std::endl;

struct BitCard {
  unsigned face: 4;  // 4 bits 0 - 15
  unsigned suit: 2;  // 2 bits 0 - 3
  unsigned color: 1; // 1 bit 0 - 1
};

void fillDeck(BitCard* const wDeck) {
  for (int i = 0; i < 52; i++) {
    wDeck[i].face = i % 13;
    wDeck[i].suit = i / 13;
    wDeck[i].color = i /26;
  }
}

void deal(const BitCard* const wDeck) {
  for (int k1 = 0, k2 = k1 + 26; k1 < 26; k1++, k2++) {
    cout << "Card:" << setw(3) << wDeck[k1].face
         << "  Suit:" << setw(2) << wDeck[k1].suit
         << "  Color:" << setw(2) << wDeck[k1].color
         << "   Card:" << setw(3) << wDeck[k2].face
         << "  Suit:" << setw(2) << wDeck[k2].suit
         << "  Color:" << setw(2) << wDeck[k2].color << endl;
  }
}



int main() {
  BitCard deck[52];

  fillDeck(deck);
  deal(deck);

  return 0;
}
