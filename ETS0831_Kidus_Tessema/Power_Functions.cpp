#include <iostream>
#include <math.h>
using namespace std;

int main (){
	double x, y, result;
	cout << "Enter the value of x: " << endl;
	cin >> x;
	cout << "Enter the value of y: " << endl;
	cin >> y;
	if (x == 0 & y == 0) {
		cout << "Invalid";
	} else {
	result = pow(x,y);
	cout << "x the power of y is: " << result;
	}
}
