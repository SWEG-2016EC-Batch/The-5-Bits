#include <iostream>
using namespace std;

int main() {
    double basicSalary, workedHours, bonusRate, overtimeRate = 0;
    double grossSalary, bonus = 0, pension, incomeTax = 0, netSalary;

    cout << "Enter Basic Salary: ";
    cin >> basicSalary;
    cout << "Enter Worked Hours: ";
    cin >> workedHours;
    cout << "Enter Bonus Rate: ";
    cin >> bonusRate;

    if (workedHours > 40) {
        cout << "Enter Overtime Bonus Rate: ";
        cin >> overtimeRate;
        bonus = (workedHours - 40) * overtimeRate;
    }

    grossSalary = basicSalary + bonus;

    double taxRate = 0;
    if (grossSalary > 3500) taxRate = 0.3;
    else if (grossSalary > 2000) taxRate = 0.25;
    else if (grossSalary > 1200) taxRate = 0.2;
    else if (grossSalary > 600) taxRate = 0.15;
    else if (grossSalary > 200) taxRate = 0.1;

    pension = basicSalary * 0.07;
    incomeTax = grossSalary * taxRate;
    netSalary = grossSalary - pension - incomeTax;

    cout << "Gross Salary: " << grossSalary << " Br" << endl;
    cout << "Pension: " << pension << " Br" << endl;
    cout << "Income Tax: " << incomeTax << " Br" << endl;
    cout << "Net Salary: " << netSalary << " Br" << endl;

    return 0;
}

