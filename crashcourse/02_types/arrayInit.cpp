int main() {
  int a1[]{1, 2, 3};  // [1, 2, 3]
  int a2[5]{};        // [0, 0, 0, 0, 0]
  int a3[5]{1, 2, 3}; // [1, 2, 3, 0, 0]
  int a4[5];          // [undef, undef, undef, undef, undef]
  return 0;
}
