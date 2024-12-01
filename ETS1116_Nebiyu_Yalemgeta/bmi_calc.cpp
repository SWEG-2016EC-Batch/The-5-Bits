#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;
    int age;
    char gender, continueInput;

    do {
        // Weight input validation
        while (true) {
            cout << "Enter weight (kg): ";
            cin >> weight;
            if (!(cin >> weight) || weight <= 0) {
                cout << "Invalid input. Please enter a positive number for weight.\n";
                cin.clear();
                cin.ignore(10000, '\n');
            } else {
                break;
            }
        }

        // Height input validation
        while (true) {
            cout << "Enter height (m): ";
            if (!(cin >> height) || height <= 0) {
                cout << "Invalid input. Please enter a positive number for height.\n";
                cin.clear();
                cin.ignore(10000, '\n');
            } else {
                break;
            }
        }

        // Age input validation
        while (true) {
            cout << "Enter age: ";
            if (!(cin >> age) || age <= 0) {
                cout << "Invalid input. Please enter a valid age.\n";
                cin.clear();
                cin.ignore(10000, '\n');
            } else {
                break;
            }
        }

        // Gender input validation
        while (true) {
            cout << "Enter gender (M/F): ";
            cin >> gender;
            if (gender != 'M' && gender != 'F' && gender != 'm' && gender != 'f') {
                cout << "Invalid gender input. Please enter 'M' or 'F'.\n";
            } else {
                break;
            }
        }

        // BMI Calculation
        bmi = weight / (height * height);
        cout << "Your BMI is: " << bmi << endl;

        // Age and Gender adjusted categories
        if (gender == 'M' || gender == 'm') {
            if (age < 20) {
                if (bmi < 18.5) cout << "Underweight\n";
                else if (bmi < 24.9) cout << "Normal weight\n";
                else cout << "Overweight\n";
            } else if (age <= 40) {
                if (bmi < 18.5) cout << "Underweight\n";
                else if (bmi < 25) cout << "Normal weight\n";
                else cout << "Overweight\n";
            } else {
                if (bmi < 18.5) cout << "Underweight\n";
                else if (bmi < 26) cout << "Normal weight\n";
                else cout << "Overweight\n";
            }
        } else {  // Female
            if (age < 20) {
                if (bmi < 18.5) cout << "Underweight\n";
                else if (bmi < 23.5) cout << "Normal weight\n";
                else cout << "Overweight\n";
            } else if (age <= 40) {
                if (bmi < 18.5) cout << "Underweight\n";
                else if (bmi < 24) cout << "Normal weight\n";
                else cout << "Overweight\n";
            } else {
                if (bmi < 18.5) cout << "Underweight\n";
                else if (bmi < 25) cout << "Normal weight\n";
                else cout << "Overweight\n";
            }
        }

        // Ask if the user wants to continue
        cout << "Do you want to calculate for another person? (Y/N): ";
        cin >> continueInput;
    } while (continueInput == 'Y' || continueInput == 'y');

    return 0;
}
