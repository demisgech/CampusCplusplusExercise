#include <cmath>
#include <string>

using namespace std;

int binary2decimal(const string& binary) {
  int decimal = 0;
  int length = binary.length();
  for (int i = 0; i < length; ++i) {
    if (binary[length - i - 1] == '1') {
      decimal += pow(2, i);
    }
  }
  return decimal;
}