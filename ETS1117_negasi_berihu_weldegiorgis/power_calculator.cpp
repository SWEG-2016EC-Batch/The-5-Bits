/*****************************
Write a program that finds the result of the expression `x`^`y` 
where the value of X and Y are entered by the user.
***************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float x, y, result;

    cout << "Please enter the base number: ";
    cin >> x;
    cout << "Please enter the power number: ";
    cin >> y;

    if ((x == 0 && y == 0) || (x < 0 && y > 0 && y < 1)) {
        cout << "Invalid input. Please ensure the following:"<<endl;
        cout << " Both x and y are not zero simultaneously and "
             << " x < 0 and 0 < y < 1 is not allowed."<<endl;
    }

    result = pow(x, y);

    cout << "The value of " << x << " to the power of " << y << " is " << result << endl;

    return 0;
}
