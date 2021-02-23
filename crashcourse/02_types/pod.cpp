#include <cstdint>


struct PodStruct {
  uint64_t a;
  char b[256];
  bool c;
};


int main() {
  PodStruct pod1{}; // all fields 0
  PodStruct pod2 = {}; // all fields 0
  PodStruct pod3{42, "Hello"}; // a, b set; c = 0
  PodStruct pod4{41, "Hi", true}; // all fields set
  return 0;
}

  
