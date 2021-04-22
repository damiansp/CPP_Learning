#include <cstdio>
#include <stdexcept>


struct Cyberdyne {
  Cyberdyne() { printf("I'm a friend of Sarah Connor.\n"); }
  ~Cyberdyne() { throw std::runtime_error{"I'll be back."}; }
};


int main() {
  try {
    Cyberdyne t800;
    throw std::runtime_error{"Come with me if you want to live."};
  } catch (const std::exception& e) {
    printf("Caught exception: %s\n", e.what());
  }
  return 0;
}
