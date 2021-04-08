#include <cstdio>


static int ratThingPower = 200;


void powerUpRatThing(int nuclearIsotopes) {
  ratThingPower += nuclearIsotopes;
  const auto wasteHeat = ratThingPower * 20;
  if (wasteHeat > 10000) printf("Warning! Hot doggie!!\n");
}


int main() {
  printf("Rat-Thing's power: %d\n", ratThingPower);
  powerUpRatThing(100);
  printf("Rat-Thing's power: %d\n", ratThingPower);
  powerUpRatThing(500);
  printf("Rat-Thing's power: %d\n", ratThingPower);
  return 0;
}
