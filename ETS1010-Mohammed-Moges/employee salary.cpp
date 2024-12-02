#include <iostream>

using namespace std;

int main (){

float weekly_working_hr, bonus_rate_hr, base_salary, gross_salary, net_salary, bonus_payment, pension, tax;

const float pension_rate = 0.05, tax_rate = 0.15;

string employee_first_name,employee_last_name;

cout << "Enter the employee's first name :\n";

cin >> employee_first_name;

cout << "Enter the employee's last name :\n";

cin >> employee_last_name;

cout << "Enter weekly working hour :\n";

cin >> weekly_working_hr;

if (cin.fail()||weekly_working_hr < 0){

a: cout << "Invalid input!\n";

return 0;
}

else {

cout << "Enter bonus rate per hour :\n";

cin >> bonus_rate_hr;

if (cin.fail()||bonus_rate_hr < 0){

goto a;
}

else{

cout << "Enter base salary :\n";

cin >> base_salary;

if (cin.fail()|| base_salary < 0){

goto a;
}

else{

       bonus_payment = weekly_working_hr * bonus_rate_hr;

       gross_salary = base_salary + bonus_payment;

       pension = base_salary * 0.05;

       tax = base_salary * 0.15;

       net_salary = gross_salary - pension - tax;

cout << "Employee's name : "<<employee_first_name<<" "<<employee_last_name<<endl;

cout << "Working hour per week : "<<weekly_working_hr<<endl;

cout << "Bonus rate per hour : "<<bonus_rate_hr<<endl;

cout << "Base salary : "<<base_salary<<endl;

cout << "Tax rate : 15%"<<endl;

cout << "Pension rate : 5%"<<endl;

cout << "Bonus payment : "<<bonus_payment<<endl;

cout << "Gross salary : "<<gross_salary<<endl;

cout << "Pension : "<<pension<<endl;

cout << "Tax : "<<tax<<endl;

cout << "Net salary : "<<net_salary<<endl;

}

}

}

return 0;

}

