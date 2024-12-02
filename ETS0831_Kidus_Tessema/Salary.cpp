#include <iostream>
#include <math.h>

using namespace std;

int main () {
  double hours_per_week, bonus, base, bonus_payment, gross, net;
  string name_e;
  const float pension = 0.05;
  const float tax = 0.15;
  cout << "What is your name?" << endl;
  cin >> name_e;
  cout << "What is your base salary?" << endl;
  cin >> base;
  cout << "How many hours you work per week?" << endl;
  cin >> hours_per_week;
  cout << "Please enter you bonus rate per hour" << endl;
  cin >> bonus;

  bonus_payment = hours_per_week * bonus;
  gross = base + bonus_payment;
  net = gross - (gross * (pension + tax));
  
  cout << name_e << endl;
  cout << "Your bonus Payment is " << bonus_payment << endl;
  cout << "Your Gross salary is " << gross << endl;
  cout << "Your net Salary is " << net << endl;
}