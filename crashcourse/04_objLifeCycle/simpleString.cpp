#include <cstdio>
#include <cstring>
#include <stdexcept>

using namespace std;


struct SimpleString {
  SimpleString(size_t maxSize): max_size{max_size}, length{} {
    if (maxSize == 0) throw runtime_error{"Max size must be > 0."};
    buffer = new char[maxSize];
    buffer[0] = 0;
  }

  ~SimpleString() { delete[] buffer; }

  void print(const char* tag) const { printf("%s: %s", tag, buffer); }

  bool appendLine(const char* x) {
    const auto xLen = strlen(x);
    if (xLen + length + 2 > maxSize) return false;
    strncpy(buffer + length, x, maxSize - length);
    length += xLen;
    buffer[length++] = '\n';
    buffer[length] = 0;
    return true;
  }

private:
  size_t maxSize;
  char* buffer;
  size_t length;
};
