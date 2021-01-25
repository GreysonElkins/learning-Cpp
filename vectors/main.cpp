#include <iostream>
#include <vector>

using namespace std;

int main () {
  vector <int> vector1;
  vector <int> vector2;

  vector1.push_back(10);
  vector1.push_back(20);

  cout << "First thing in vector1: " << vector1[0] << endl;
  cout << "Second thing in vector1: " << vector1[1] << endl;
  cout << "Vector1 has " << vector1.size() << " items." << endl;

  vector2.push_back(100);
  vector2.push_back(200);

  cout << "\nVector2 is [" << vector2[0] << ", " << vector2[1] << "]" << endl;
  cout << "Vector2 has " << vector2.size() << " items." << endl;

  vector <vector<int>> vector_2d;

  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  cout << "\nOur two dimensional vector is a sum of vector1 and vector2 [" << endl;
  cout << " [" << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << "]" << endl;
  cout << " [" << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << "]" << endl;
  cout << "]" << endl;

  vector1.at(0) = 1000;

  cout << "\nWe changed the first thing in vector1 to " << vector1[0] << endl;

  cout << "\nThe two dimensional vector is [" << endl;
  cout << " [" << vector_2d.at(0).at(0) << ", " << vector_2d.at(0).at(1) << "]" << endl;
  cout << " [" << vector_2d.at(1).at(0) << ", " << vector_2d.at(1).at(1) << "]" << endl;
  cout << "]" << endl;

  cout << "\n.push_back creates a copy of the data, rather than refering to, or changing, the original data.";

  return 0;
}