#include <iostream>
#include <string>

using namespace std;

string encryptCaesar(const string &text, int shift) {
  string result = "";

  // Traverse the text
  for (int i = 0; i < text.length(); i++) {
    // Apply shift only to alphabetic characters
    if (isalpha(text[i])) {
      char base = islower(text[i]) ? 'a' : 'A';
      result += (text[i] - base + shift) % 26 + base;
    } else {
      // Non-alphabetic characters are added unchanged
      result += text[i];
    }
  }

  return result;
}

string decryptCaesar(const string &text, int shift) {
  string result = "";

  // Traverse the text
  for (int i = 0; i < text.length(); i++) {
    // Apply shift only to alphabetic characters
    if (isalpha(text[i])) {
      char base = islower(text[i]) ? 'z' : 'Z';
      result += (text[i] - base - shift) % 26 + base;
    } else {
      // Non-alphabetic characters are added unchanged
      result += text[i];
    }
  }

  return result;
}

int main() {
  string text = "Hello, World";
  int shift = 9;

  shift = shift % 26;
  cout << "Original text: " << text << endl;
  string encryptedText = encryptCaesar(text, shift);

  cout << "Encrypted text: " << encryptedText << endl;

  string decryptedText = decryptCaesar(encryptedText, shift);
  cout << "Decrypted text: " << decryptedText << endl;

  return 0;
}
