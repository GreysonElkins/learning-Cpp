#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main () {
  char first_name[20] {};
  char last_name[20] {};
  char full_name[50] {};
  char temp[50] {};

  cout << "Please enter your first name: ";
  cin >> first_name;

  cout << "Please enter your last name: ";
  cin >> last_name;

  cout << "Hello, " << first_name << " your name has " << strlen(first_name) << " characters" << endl;
  cout << "and your last name, " << last_name << " has " << strlen(last_name) << " characters." << endl;

  strcpy(full_name, first_name);
  strcat(fullname, " ");
  strcat(full_name, last_name);
  cout << "Your full name is " << full_name << endl;

  strcpy(temp, full_name);
  if (strcmp(temp, full_name) == 0) <
    cout << temp << " is the same as " << full_name;
  else 
    cout << temp << " is not the same as " << full_name;


  return 0;
}