/*************************************************************
Design an algorithm and write a to read an employee name weekly working hours, bonus rate per hour and
base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%,
tax: 15%). 
***************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string employee_name;
    float weekly_hours, bonus_rate, base_salary;
    float bonus_payment, gross_salary, pension, tax, net_salary;

    cout << "Enter the employee name: ";
    cin >> employee_name;

    cout << "Enter weekly working hours: ";
    cin >> weekly_hours;

    cout << "Enter bonus rate per hour: ";
    cin >> bonus_rate;

    cout << "Enter base salary: ";
    cin >> base_salary;

    bonus_payment = weekly_hours * bonus_rate;
    gross_salary = base_salary + bonus_payment;
    pension = 0.05 * gross_salary;
    tax = 0.15 * gross_salary;
    net_salary = gross_salary - (pension + tax);


    cout << "\nEmployee Name: " << employee_name << endl;
    cout << "Bonus Payment: $" << bonus_payment << endl;
    cout << "Gross Salary: $" << gross_salary << endl;
    cout << "Net Salary: $" << net_salary << endl;

    return 0;
}
