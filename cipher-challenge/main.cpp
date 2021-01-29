#include <iostream>
#include <string>

using namespace std;

int main () {
  string secret_message {};
  string coded_message {};
  string decoded_message {};
  int message_length {0};
  string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
  string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};
  // bool cipher_check {alphabet.length() == key.length()};
  // cout << "No missing characters: " << cipher_check << endl;
  cout << "Enter a secret message: ";
  getline(cin, secret_message);
  message_length = secret_message.length();
  cout << secret_message[3];

  for (char c: secret_message) {
      size_t characterIndex {alphabet.find(c)};
    if (characterIndex != string::npos) {
      coded_message = coded_message + key.at(characterIndex);
      } else {
        coded_message = coded_message + c;
      }
  }

  cout << "Coded message: \"" << coded_message << "\"" << endl;

  for (char c: coded_message) {
      size_t characterIndex {key.find(c)};
    if (characterIndex != string::npos) {
      decoded_message = decoded_message + alphabet.at(characterIndex);
      } else {
        decoded_message = decoded_message + c;
      }
  }

  cout << "Decoded message: \"" << decoded_message << "\"";

  return 0;
}