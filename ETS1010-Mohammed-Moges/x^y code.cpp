
#include <iostream>

#include <cmath>

using namespace std;

int main (){
	
	double base,exponent, product = 1;
	
	
	cout << "Enter the base :\n";
	
	cin >> base;
	
	if (cin.fail()){
		
	a:	cout << "Error\n";
		
	}
	
else {

	cout << "Enter the exponent :\n";
	
	cin >> exponent;  
	
	if (cin.fail()){
		
		goto a;
	}
	
	if (base == 0 && exponent == 0){
		
		cout << "Undefined!\n";
	}
	else if (base < 0 && floor(exponent ) != exponent) {
		
	cout << "It's an imaginary number and it doesn't work under real number\n"	;
	
	return 4;
		
	}
		
	
	else {
		product = pow (base,exponent);
		
		cout <<base << " the power of "<<exponent<<" is " <<product;
	
return 0;
}
}

}

 
