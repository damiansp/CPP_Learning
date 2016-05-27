/* A (rather inefficent) card shuffling program */
#include <iostream>
using std::cout;
using std::ios;

#include <iomanip>
using std::setw;
using std::setiosflags;

#include <cstdlib>
#include <ctime>

void shuffle(int wDeck[][13]) {
  int suit, value;

  for (int card = 1; card <= 52; card++) {
    do {
      suit = rand() % 4;
      value = rand() % 13;
    } while (wDeck[suit][value] != 0);

    wDeck[suit][value] = card;
  }
}

void deal(const int wDeck[][13], const char *wFace[], const char *wSuit[]) {
  for (int card = 1; card <= 52; card++) {
    for (int suit = 0; suit <= 3; suit++) {
      for (int value = 0; value <= 12; value++) {
        if (wDeck[suit][value] == card) {
          cout << setw(5) << setiosflags(ios::right) << wFace[value] << " of "
               << setw(8) << setiosflags(ios::left) << wSuit[suit]
               << (card % 2 == 0 ? '\n' : '\t');
        }
      }
    }
  }
}



int main() {
  const char *suit[4] = { "Spades", "Clubs", "Hearts", "Diamonds" };
  const char *value[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six",
                            "Seven", "Eight", "Nine", "Ten", "Jack", "Queen",
                            "King" };
  int deck[4][13] = {0};

  srand(time(0));

  shuffle(deck);
  deal(deck, value, suit);

  return 0;
}
