#include <iostream>
using namespace std;

int main() {
    double tankCapacity, milesPerGallon, totalMiles;

    // Prompt for valid fuel tank capacity
    while (true) {
        cout << "Enter the capacity of the fuel tank in gallons: ";
        cin >> tankCapacity;

        // Check if the input is valid (positive number)
        if (tankCapacity > 0) {
            break; // Exit the loop if valid input is entered
        } else {
            cout << "Invalid input! Capacity must be a positive number. Please try again." << endl;
        }
    }

    // Prompt for valid miles per gallon
    while (true) {
        cout << "Enter the number of miles the automobile can drive per gallon: ";
        cin >> milesPerGallon;

        // Check if the input is valid (positive number)
        if (milesPerGallon > 0) {
            break; // Exit the loop if valid input is entered
        } else {
            cout << "Invalid input! Miles per gallon must be a positive number. Please try again." << endl;
        }
    }

    // Calculate the total number of miles the automobile can drive
    totalMiles = tankCapacity * milesPerGallon;

    // Output the result
    cout << "The automobile can be driven " << totalMiles << " miles without refueling." << endl;

    return 0;
}
