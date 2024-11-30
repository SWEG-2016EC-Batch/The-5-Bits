#include <iostream>

using namespace std;

int main () {
  float weekly_working_hours, bonus_rate_per_hour, base_salary, bonus_payment, gross_salary, net_salary;
  string employee_name;

  cout << "Salary Calculator" << endl;

  cout << "Enter name: ";
  cin >> employee_name;
  cout << "Enter weekly working hours: ";
  cin >> weekly_working_hours;
  cout << "Enter bonus rate per hour: ";
  cin >> bonus_rate_per_hour;
  cout << "Enter base salary: ";
  cin >> base_salary;

  bonus_payment = weekly_working_hours * bonus_rate_per_hour;
  gross_salary = base_salary + bonus_payment;
  net_salary = gross_salary - (gross_salary * 0.20);
  
  cout << "\nName: " << employee_name << endl;
  cout << "Gross Salary = " << gross_salary << endl;
  cout << "Net Salary = " << net_salary << endl;
  cout << "Bonus Payment = " << bonus_payment;
}
