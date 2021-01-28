#include <iostream>
#include <vector>

using namespace std;

int main () {

  bool isRunning {true};
  vector <int> numList;
  int newNumber {};

  cout << "What would you like to do with your number list?" << endl; 
  cout << "------------------------------------------------" << endl;
  cout << "Enter:" << endl;
  cout << "\"P\" to print numbers in your list" << endl;
  cout << "\"A\" to add numbers to your list" << endl;
  cout << "\"M\" to display the mean of the numbers in your list" << endl;
  cout << "\"S\" to see the smallest number in your list" << endl;
  cout << "\"L\" to see the largest number in your list" << endl;
  cout << "\"Q\" to Quit \n" << endl;

  while(isRunning) {
    char command;
    cin >> command; 
    int listSum = {0};

    switch (command) {
      case 'P': 
      case 'p': 
        if (numList.size() > 0) {
          cout << "[";  
          for(int num: numList) {
            cout << " " << num;
          }
          cout << " ]" << endl;
        } else {
          cout << "The list is empty" <<  endl; 
        }
        break;
      case 'A':
      case 'a':
        cout << "Enter a number for the list: ";
        cin >> newNumber; 
        numList.push_back(newNumber);
        cout << "\n" << newNumber << " added" << endl;
        break;
      case 'M':
      case 'm':
        if (numList.size() > 0) {
          for (int num: numList) {
            listSum = listSum + num;
          }
          cout << listSum / numList.size() << endl;
        }
        else {
          cout << "Unable to calculate this mean - no data" << endl;
        }
        break;
      case 'S':
      case 's':
        if (numList.size() > 0) {
          sort(numList.begin(), numList.end());
          cout << numList.at(0) << endl;
        } else {
          cout << "Unable to determine the smallest number - the list is empty" << endl;
        }
        break;
      case 'L':
      case 'l':
        if (numList.size() > 0) {
          sort(numList.begin(), numList.end());
          cout << numList.at(numList.size() - 1) << endl;
        } else { 
          cout << "Unable to determine the largest number - the list is empty" << endl;
        }
        break; 
      case 'Q':
      case 'q':
        isRunning = false;
        break;
      default: cout << "That command was invalid" << endl;
    }
  }

  return 0;
}