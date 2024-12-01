#include <iostream>
#include <cmath> // For the pow() function
using namespace std;

int main() {
    double x, y, result;
    bool validInput = false;

    // Loop until valid input is entered
    while (!validInput) {
        cout << "Enter the value of x: ";
        cin >> x;

        // Check if the input for x is valid
        if (cin.fail()) {
            cout << "Invalid input! Please enter a valid number for x." << endl;
            cin.clear();  // Clear the error flag
            cin.ignore(10000, '\n');  // Ignore the invalid input
        } else {
            cout << "Enter the value of y: ";
            cin >> y;

            // Check if the input for y is valid
            if (cin.fail()) {
                cout << "Invalid input! Please enter a valid number for y." << endl;
                cin.clear();  // Clear the error flag
                cin.ignore(10000, '\n');  // Ignore the invalid input
            } else {
                // Both inputs are valid, calculate the result
                result = pow(x, y);
                cout << "The result of " << x << " raised to the power of " << y << " is: " << result << endl;
                validInput = true;  // Set validInput to true to exit the loop
            }
        }
    }

    return 0;
}
