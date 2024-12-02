#include <iostream>
#include <math.h>
using namespace std;

int main (){
	int num;
	float mass, height, BMI;
	char i;
	cout << "BMI Calculator" << endl;
	do {
	cout << "Enter the number people you want BMI done: ";
	cin >> num;
	
	while (num!=0) {
	cout << "Please input the person's mass (in kilogram): ";
	cin >> mass;
	cout << "Please input the person's height (in meter): " ;
	cin >> height;
	BMI = mass/ (height * height);
	if (BMI < 18.5) {
		cout << "Your are under-weight" << endl;
	} else if (BMI >= 18.5 && BMI < 25) {
		cout << "Your are normal-weight" << endl;
	} else {
		cout << "Your are over-weight" << endl;
	} num--; }
	cout << "if you want to continue - press y" << endl;
            cout << "if you want to stop - press n" << endl; 
            cin >> i;
    } while (i == 'y');
}
