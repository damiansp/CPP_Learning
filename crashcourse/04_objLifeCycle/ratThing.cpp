#include <cstdio>


struct RatThing {
  static int ratThingPower;

  static void powerUpRatThing(int nuclearIsotopes) {
    ratThingPower += nuclearIsotopes;
    const auto wasteHeat = ratThingPower * 20;
    if (wasteHeat > 10000) printf("Warning! Hot doggie!!\n");
    printf("Rat-Thing's power: %d\n", ratThingPower);
  }
};


int RatThing::ratThingPower = 200;


int main() {
  RatThing::powerUpRatThing(100);
  RatThing::powerUpRatThing(500);
  return 0;
}
