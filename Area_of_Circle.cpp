#include <iostream>
#include <cmath>

using namespace std;

int main () {
  float radius, Area;

  cout << "Enter the Radius of a Circle: ";
  cin >> radius;

  Area = M_PI * radius * radius;

  cout << "The circumference of Circle is: " << Area << endl;

  return 0;
}