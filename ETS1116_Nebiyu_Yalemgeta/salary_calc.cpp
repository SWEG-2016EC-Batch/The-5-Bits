#include <iostream>
using namespace std;

int main() {
    string employeeName;
    double baseSalary, bonusRate, workingHours, grossSalary, netSalary, bonusPayment;

    // Getting employee name
    cout << "Enter employee name: ";
    cin >> employeeName;

    // Getting weekly working hours with validation
    cout << "Enter weekly working hours: ";
    cin >> workingHours;
    if (workingHours < 0) {
        cout << "Invalid input! Weekly working hours must be positive.\n";
        cout << "Enter weekly working hours: ";
        cin >> workingHours;
    }

    // Getting bonus rate per hour with validation
    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;
    if (bonusRate < 0) {
        cout << "Invalid input! Bonus rate per hour must be positive.\n";
        cout << "Enter bonus rate per hour: ";
        cin >> bonusRate;
    }

    // Getting base salary with validation
    cout << "Enter base salary: ";
    cin >> baseSalary;
    if (baseSalary < 0) {
        cout << "Invalid input! Base salary must be positive.\n";
        cout << "Enter base salary: ";
        cin >> baseSalary;
    }

    // Calculate bonus payment and gross salary
    bonusPayment = workingHours * bonusRate;
    grossSalary = baseSalary + bonusPayment;

    // Calculate net salary (after pension and tax)
    netSalary = grossSalary - grossSalary * 0.05 - grossSalary * 0.15;

    // Display results
    cout << "\nEmployee Name: " << employeeName << endl;
    cout << "Base Salary: " << baseSalary << endl;
    cout << "Bonus Payment: " << bonusPayment << endl;
    cout << "Gross Salary: " << grossSalary << endl;
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}
