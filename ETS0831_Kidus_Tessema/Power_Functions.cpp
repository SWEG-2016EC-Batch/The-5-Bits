#include <iostream>
#include <math.h>
using namespace std;

int main (){
	double x, y, result;
	cout << "Enter the value of x: " << endl;
	cin >> x;
	cout << "Enter the value of y: " << endl;
	cin >> y;
	result = pow(x,y);
	cout << "x the power of y is: " << result;
}