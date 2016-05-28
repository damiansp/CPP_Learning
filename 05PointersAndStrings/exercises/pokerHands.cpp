/* A (rather inefficent) card shuffling program */
#include <iostream>
using std::cout;
using std::ios;

#include <iomanip>
using std::setw;
using std::setiosflags;

#include <cstdlib>
#include <ctime>

const char *suit[4] = { "Spades", "Clubs", "Hearts", "Diamonds" };
const char *value[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six",
                          "Seven", "Eight", "Nine", "Ten", "Jack", "Queen",
                          "King" };

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

void dealAHand(const int wDeck[][13],
               const char *wFace[],
               const char *wSuit[],
               int hand[5][2]) {
  for (int card = 1; card <= 5; card++) {
    for (int suit = 0; suit <= 3; suit++) {
      for (int value = 0; value <= 12; value++) {
        if (wDeck[suit][value] == card) {
          cout << setw(5) << setiosflags(ios::right) << wFace[value] << " of "
               << setw(8) << setiosflags(ios::left) << wSuit[suit]
               << (card % 2 == 0 ? '\n' : '\t');
          hand[card - 1][0] = value;
          hand[card - 1][1] = suit;
        }
      }
    }
  }

  cout << "\n\n";
}

void showHand(int hand[5][2]) {
  for (int card = 0; card < 5; card++) {
    cout << value[hand[card][0]] << " of " << suit[hand[card][1]] << '\n';
  }
}

bool hasNOfAKind(const int n, const int hand[5][2]) {
  int nOfKind = 1;
  int maxOfKind = 1;
  int kind;

  for (int card1 = 0; card1 < 4; card1++) {
    for (int card2 = card1 + 1; card2 < 5; card2++) {
      if (hand[card1][0] == hand[card2][0]) {
        nOfKind++;

        if (nOfKind > maxOfKind) {
          maxOfKind = nOfKind;
        }
      }
    }

    nOfKind = 1;
  }

  if (maxOfKind >= n) {
    printf( "Hand has %d of a kind\n", n);
    return true;
  }

  return false;
}

bool hasFlush(int hand[5][2]) {
  int suit = hand[0][1];

  // check remaining cards for same suit
  for (int card = 1; card < 5; card++) {
    // if any is not a match -> not a flush
    if (hand[card][1] != suit) {
      return false;
    }
  }

  // all cards matched
  cout << "Hand has a flush";
  return true;
}

bool hasStraight(int hand[5][2]) {
  int min = hand[0][0],
    max = hand[0][0],
    value;

  for (int card = 1; card < 5; card++) {
    value = hand[card][0];
    // Check if card is one less than min or...
    if ((value == 12 && min == 0) || (value + 1 == min)) {
      min = value;
    }
      
    // ...one more than max
    if ((value == 0 && max == 12) || (value - 1 == max)) {
      max = value;
    }
  }

  if (min < max) {
    if (max - min == 4) {
      cout << "Hand has a straight\n";
      return true;
    }
  } else {
    // wrap-around case: e.g. [10, 11, 12, 0, 1]... in which case min (10) -
    // max (1) = 9
    if (min - max == 9) {
      cout << "Hand has a (wrap-around) straight)\n";
      return true;
    }
  }

  return false;
}


int main() {
  int deck[4][13] = {0};
  int hand[5][2] = {0};
  int nTries = 10000,
    nStraight = 0,
    nFlush = 0,
    n4 = 0,
    n3 = 0,
    n2 = 0;

  srand(time(0));

  for (int game = 0; game < nTries; game++) {
    shuffle(deck);
    dealAHand(deck, value, suit, hand);

    // Check for certain hands
    for (int n = 4; n >= 2; n--) {
      cout << "n = " << n << '\n';
      if (hasNOfAKind(n, hand)) {
        switch (n) {
        case 4:
          n4++; break;
        case 3:
          n3++; break;
        case 2:
          n2++; break;
        }
      }
    }

    if (hasFlush(hand)) {
      nFlush++;
    }

    if (hasStraight(hand)) {
      nStraight++;
    }

    // reset deck
    for (int s = 0; s < 4; s++) {
      for (int v = 0; v < 13; v++) {
        deck[s][v] = 0;
      }
    }
  }

  cout << "After " << nTries << " hands were dealt, there were:\n"
       << nFlush << " flushes\n"
       << nStraight << " straights\n"
       << n4 << " four of a kinds\n"
       << n3 << " three of a kinds\n"
       << n2 << " two of a kinds\n\n";
    
  return 0;
}
