#include <iostream>

using namespace std;

int main () {
  float fuel_tank_capacity, miles_per_gallon, miles_per_tank;
  
  cout << "Miles per Tank Calculator" << endl;
  
  cout << "Enter fuel tank capacity in gallons: ";
  cin >> fuel_tank_capacity;
  cout << "Enter miles per gallon: ";
  cin >> miles_per_gallon;
  
  miles_per_tank = fuel_tank_capacity * miles_per_gallon;

  cout << "Miles per full tank = " << miles_per_tank << endl;
}
