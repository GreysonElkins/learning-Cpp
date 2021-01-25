#include <iostream>

// using namespace std; // brings in the entire std namespace
using std::cout;
using std::cin;

int main() {
  int favorite_number {0};
  cout << "What's your favorite number between 1 and 100? ";
  cin >> favorite_number;
  cout << favorite_number << " is my favorite also!" 
    << endl;
  return 0;
}