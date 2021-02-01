#include <iostream>
#include <string>

using namespace std; 

int main () {
  string original_message {};
  int message_limit {};
  int foundation_length {};
  int counter {0};

  cout << "Enter a message to turn into a pyramid: ";
  cin >> original_message;
  cout << "\n";

  message_limit = original_message.length();

  for (char c: original_message) {
    
    for (size_t j = message_limit - counter; j > 0; --j) {
      cout << " ";
    }

    for (size_t i = 0; i < counter; ++i) {
      cout << original_message.at(i);
    }
    cout << c;

    if (counter != 0) {
      for (size_t k = counter; k > 0; --k) {
        cout << original_message.at(k);
      }
      cout << original_message.at(0);
    }
    cout << endl;
    counter += 1;
  }

  return 0;
}