#include <iostream>
using namespace std;

int main () {
    float basic_salary, working_hours, bouns_rate; 
    float gross_salary, bouns, income_tax, pension, net_salary;
    float pension_rate = 0.07, income_tax_rate;

    cout << "Welcome!" << endl;
    a:
    cout << "Please enter your basic salary" << endl;
    cin >> basic_salary;

    if (basic_salary < 0) {
        cout << "Invalid input" << endl;
        goto a;    
    } else if (basic_salary > 0 && basic_salary <= 200) {
        income_tax_rate == 0;
    } else if (basic_salary > 200 && basic_salary <= 600) {
        income_tax_rate == 0.1;
    } else if (basic_salary > 600 && basic_salary <= 1200) {
        income_tax_rate == 0.15;
    } else if (basic_salary > 1200 && basic_salary <= 2000) {
        income_tax_rate == 0.20;
    } else if (basic_salary > 2000 && basic_salary <= 3500) {
        income_tax_rate == 0.25;
    } else {
        income_tax_rate == 0.3;
    }

    cout << "Please enter how many hours you have worked" << endl;
    cin >> working_hours;
    
    if (working_hours >= 40) {
        cout << "Please enter your bouns rate per extra hours you worked" << endl;
        cin >> bouns_rate;
        bouns = (working_hours - 40) * bouns_rate;
    } else {
        bouns == 0;
    }

    gross_salary = basic_salary + bouns;
    pension = basic_salary * pension_rate;
    income_tax = (gross_salary / basic_salary) * income_tax_rate;
    net_salary = gross_salary - (pension + income_tax);

    cout << "Your net salary is: " << net_salary;
}
