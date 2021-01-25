#include <iostream>

using namespace std;

int main() {
  const int price_per_small_room {25};
  const int price_per_large_room {35};
  const float tax_rate {.06};
  cout << "Hello, welcome to Frank's carpet cleaning service." << endl;
  cout << "\nHow many small rooms would you like cleaned?";
 
  int number_of_small_rooms {0}; 
  cin >> number_of_small_rooms;
  const int small_room_order_price {number_of_small_rooms * price_per_small_room};

  cout << "\nHow many large rooms would you like cleaned?";
  int number_of_large_rooms {0};
  cin >> number_of_large_rooms;
  const int large_room_order_price {number_of_large_rooms * price_per_large_room};

  const int subtotal = {large_room_order_price + small_room_order_price};
  const float taxes_owed = {subtotal * tax_rate};

  cout << "\nEstimate for carpet cleaning service: " << endl;
  cout << "=======================================" << endl;
  cout << "Number of Small Rooms: " << number_of_small_rooms << endl;
  cout << "Number of Large Rooms: " << number_of_large_rooms << endl;
  cout << "Price per small room: $" << price_per_small_room << endl;
  cout << "Price per large room: $" << price_per_large_room << endl;
  cout << "=======================================" << endl;
  cout << "Subtotal: $" << subtotal << endl;
  cout << "Tax: $" << taxes_owed << endl;
  cout << "\t\tTotal Estimate: $" << subtotal + taxes_owed << endl;
  cout << "\nThis estimate is valid for " << 30 << " days" << endl;

  return 0;
}