
/******************************************************************************
 Develop a program that find the Net-Pay of an employee after
deduction of pension (7%) and tax based on tax rate provided. The
program should read the basic salary, worked hours, and bonus
rate. If the employee worked hours exceed 40 hrs., the program
prompts the user to enter an over-time bonus rate/hour.

*******************************************************************************/

#include <iostream>
using namespace std;

int main() {

	float gross_salry=0, bonus_rate, basc_slry,wrked_hrs,tax_rate,overtime_bonus_rate,extra_hours;
	float pension=0.07,tax_deduction,pension_deduction, net_pay;

	cout<< "Please enter the basic salery of the employee: ";
	cin>>basc_slry ;

	gross_salry=basc_slry;
    pension_deduction=basc_slry*pension;

	cout<< "Please enter the  bonus rate : ";
	cin>>bonus_rate ;

	cout<< "Please enter the total hours  worked: ";
	cin>>wrked_hrs ;
	if (wrked_hrs>40) {
		cout<< "Please enter the over time bonus rate  of the employee(bonus per an hour): ";
		cin>>overtime_bonus_rate;
		extra_hours=wrked_hrs-40;
		gross_salry+=overtime_bonus_rate*extra_hours;
	}
	gross_salry+=basc_slry*bonus_rate;

	    if (gross_salry<=200) tax_rate=0;
  	    else if (gross_salry<=600) tax_rate=0.1;
    	else if (gross_salry<=1200) tax_rate=0.15;
     	else if (gross_salry<=2000) tax_rate=0.2;
     	else if (gross_salry<=3500) tax_rate=0.25;
    	else    tax_rate=0.3;
	
 tax_deduction=gross_salry*tax_rate;
 net_pay=gross_salry - tax_deduction - pension_deduction;
 
    cout << "\n--- Pay Summary ---" << endl;
    cout << "Gross salary: " << gross_salry <<" birr"<< endl;
    cout << "Pension Deduction (7%): " << pension_deduction << " birr"<<endl;
    cout << "Tax Deduction (" << tax_rate*100 << "%): " << tax_deduction <<" birr"<< endl;
    cout << "Net Pay: " << net_pay <<" birr"<< endl;
	return 0;
}
