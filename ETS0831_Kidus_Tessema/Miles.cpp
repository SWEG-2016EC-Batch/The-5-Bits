#include <iostream>
#include <math.h>
using namespace std;

int main (){
	float gallon, milepergallon, mile;
	cout << "Enter the avaliable fuel in you automobile's tank (in gallon): ";
	cin >> gallon;
	cout << "Enter the miles per gallon of your automobile: ";
	cin >> milepergallon;
	mile = milepergallon / gallon;
	cout << "The miles you can go: " << mile;
}