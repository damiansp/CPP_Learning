/* cardDeal.cpp */
// A program that simulates shuffling and dealign a deck of cards
#include <cstdlib>
#include <ctime>
#include <iomanip>
using std::resetiosflags;
using std::setiosflags;
using std::setw;

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::ios;

struct Card {
  char* face;
  char* suit;
};

void fillDeck(Card* const wDeck, char* wFace[], char* wSuit[]) {
  for (int i = 0; i < 52; i++) {
    wDeck[i].face = wFace[i % 13];
    wDeck[i].suit = wSuit[i / 13];
  }
}

void shuffle(Card* const wDeck) {
  for (int i = 0; i < 52; i++) {
    int j = rand() % 52;
    Card temp = wDeck[i];

    wDeck[i] = wDeck[j];
    wDeck[j] = temp;
  }
}

void deal(Card* const wDeck) {
  for (int i = 0; i < 52; i++) {
    cout << setiosflags(ios::right) << setw(5)
         << wDeck[i].face << " of "
         << resetiosflags(ios::right) << setiosflags(ios::left) << setw(8)
         << wDeck[i].suit
         << ((i + 1) % 2 ? '\t' : '\n'); // tab between cards, 2 per line
  }
}



int main() {
  Card deck[52];
  char* face[] = { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven",
                   "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
  char* suit[] = { "Hearts", "Diamonds", "Clubs", "Spades" };

  // seed randomizer
  srand(time(0));
  fillDeck(deck, face, suit);
  shuffle(deck);
  deal(deck);
  
  return 0;
}
