#include <iostream>

using namespace std;

int main () {
    float basic_salary, worked_hours, bonus_rate, bonus = 0, gross_salary, pension, tax = 0, net_salary;
    //input
    cout << "Net Pay Calculator" << endl;
    cout << "Enter basic salary: ";
    cin >> basic_salary;
    cout << "Enter worked hours: ";
    cin >> worked_hours;
    //bonus
    if (worked_hours > 40) {
        cout << "Enter overtime bonus rate per hour: ";
        cin >> bonus_rate;
        bonus = bonus_rate * (worked_hours - 40);
    }
    //calculation
    gross_salary = basic_salary + bonus;
    pension = basic_salary * 0.07;
    //tax
    if (gross_salary > 3500) tax = gross_salary * 0.3;
    else if (gross_salary > 2000) tax = gross_salary * 0.25;
    else if (gross_salary > 1200) tax = gross_salary * 0.2;
    else if (gross_salary > 600) tax = gross_salary * 0.15;
    else if (gross_salary > 200) tax = gross_salary * 0.1;
    //net salary
    net_salary = gross_salary - pension - tax;
    //output
    cout << "\nNet Salary = " << net_salary << endl;
    cout << "Gross Salary = " << gross_salary << endl;
    cout << "Bonus = " << bonus << endl;
    cout << "Pension = " << pension << endl;
    cout << "Tax = " << tax << endl;
}
