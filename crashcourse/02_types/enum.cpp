#include <cstdio>


enum class Race {Dinan, Teklan, Ivyn, Moiran, Camite, Julian, Aidan};


int main() {
  Race race = Race::Dinan;

  switch (race) {
  case Race::Dinan: {
    printf("You work hard\n"); break;
  }
  case Race::Teklan: {
    printf("You are very strong\n"); break;
  }
  case Race::Ivyn: {
    printf("You are a great leader\n"); break;
  }
  case Race::Moiran: {
    printf("You are incredibly adaptive\n"); break;
  }
  case Race::Camite: {
    printf("You are surpringly helpful\n"); break;
  }
  case Race::Julian: {
    printf("Anything you want, you got it\n"); break;
  }
  case Race::Aidan: {
    printf("The enigma.\n"); break;
  }
  default: printf("Error: race unknown.");
  }
  
  return 0;
}
