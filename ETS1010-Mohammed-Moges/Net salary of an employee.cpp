#include <iostream>

using namespace std;

int main (){
    double basic_salary,worked_hour,bonus_rate,overtime_rate,overtime, bonus,gross_salary, pension, tax, tax_rate,net_salary;

    cout << "Enter base salary : ";

    cin >> basic_salary ;

    cout << "\nEnter bonus rate : ";

    cin >> bonus_rate ;

    cout << "\nEnter working hour : ";

    cin >> worked_hour ;

    if (worked_hour > 40 ){

        cout << "\nEnter overtime rate : ";

        cin >> overtime_rate;
        
        overtime = (worked_hour - 40) * overtime_rate;
        
    }

    else {

        overtime_rate = 0;
        
        overtime = 0 ;
        
    }
    
    bonus = bonus_rate * worked_hour;

    gross_salary = basic_salary + bonus + overtime;

    pension = gross_salary * 0.07;

    if (gross_salary <= 200){

        tax_rate = 0;

    }

    else if (gross_salary > 200 && gross_salary <= 600){

        tax_rate = 0.1;

    }

    else if (gross_salary > 600 && gross_salary <= 1200){

        tax_rate = 0.15;

    }

    else if (gross_salary > 1200 && gross_salary <= 2000){

        tax_rate = 0.2;

    }

    else if (gross_salary > 2000 && gross_salary <= 3500){

        tax_rate = 0.25;

    }

    else {

        tax_rate = 0.3;

    }

    tax = gross_salary * tax_rate;

    net_salary = gross_salary - pension - tax;

    cout << "\nYour base salary is : "<<basic_salary<<" Br "<<endl;

    cout << "Your bonus payment is : "<<bonus<<" Br "<<endl;

    cout << "Your overtime payment is : "<<overtime<<" Br "<<endl;

    cout << "Your gross salary is : "<<gross_salary<<" Br "<<endl;

    cout << "Your pension is : "<<pension<<" Br "<<endl;

    cout << "Your tax is : "<<tax<<" Br "<<endl;

    cout << "Your net salary is : "<<net_salary<<" Br "<<endl;
    
    return 0;
}
