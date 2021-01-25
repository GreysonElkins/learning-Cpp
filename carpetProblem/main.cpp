#include <iostream>

using namespace std;

int main() {
  const double price_per_room {30.50};
  const float tax_rate {.06};
  cout << "Hello, welcome to Frank's carpet cleaning service." << endl;
  cout << "\nHow many rooms would you like cleaned?";
 
  int number_of_rooms {0}; 
  cin >> number_of_rooms;
  const double subtotal {number_of_rooms * price_per_room};

  cout << "\nEstimate for carpet cleaning service: " << endl;
  cout << "=======================================" << endl;
  cout << "Number of Rooms: " << number_of_rooms << endl;
  cout << "Price per room: $" << price_per_room << endl;
  cout << "=======================================" << endl;
  cout << "Subtotal: $" << subtotal << endl;
  cout << "Tax: $" << price_per_room * number_of_rooms * tax_rate<< endl;
  cout << "\t\tTotal Estimate: $" << subtotal + (subtotal * 0.06) << endl;
  cout << "\nThis estimate is valid for " << 30 << " days" << endl;

  return 0;
}