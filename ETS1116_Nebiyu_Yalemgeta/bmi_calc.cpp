#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        float weight, height, bmi;
        int age;
        char gender;
        int attempts;

        // Input age with validation and retry limit
        attempts = 0;
        cout << "\nEnter your age (number only): ";
        cin >> age;
        while (cin.fail() || age <= 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            attempts++;
            if (attempts >= 5) {
                cout << "Too many invalid attempts! Exiting program.\n";
                return 1;
            }
            cout << "Invalid input! Please enter a valid age: ";
            cin >> age;
        }

        // Input gender with validation and retry limit
        attempts = 0;
        cout << "Enter your gender (M for Male, F for Female): ";
        cin >> gender;
        while (gender != 'M' && gender != 'm' && gender != 'F' && gender != 'f') {
            attempts++;
            if (attempts >= 5) {
                cout << "Too many invalid attempts! Exiting program.\n";
                return 1;
            }
            cout << "Invalid input! Please enter 'M' for Male or 'F' for Female: ";
            cin >> gender;
        }

        // Input weight with validation and retry limit
        attempts = 0;
        cout << "Enter your weight (in kg): ";
        cin >> weight;
        while (cin.fail() || weight <= 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            attempts++;
            if (attempts >= 5) {
                cout << "Too many invalid attempts! Exiting program.\n";
                return 1;
            }
            cout << "Invalid input! Please enter a valid weight: ";
            cin >> weight;
        }

        // Input height with validation and retry limit
        attempts = 0;
        cout << "Enter your height (in meters): ";
        cin >> height;
        while (cin.fail() || height <= 0) {
            cin.clear();
            cin.ignore(1000, '\n');
            attempts++;
            if (attempts >= 5) {
                cout << "Too many invalid attempts! Exiting program.\n";
                return 1;
            }
            cout << "Invalid input! Please enter a valid height: ";
            cin >> height;
        }

        // Calculate BMI
        bmi = weight / (height * height);

        // Display BMI
        cout << "Your BMI is: " << bmi << endl;

        // Determine the weight category considering gender and age
        if (age < 18) {
            // For children and teens (under 18)
            if (bmi < 18.5) {
                cout << "You are underweight for your age." << endl;
            } else if (bmi >= 18.5 && bmi <= 24.9) {
                cout << "You are in the normal weight range for your age." << endl;
            } else {
                cout << "You are overweight for your age." << endl;
            }
        } else if (gender == 'M' || gender == 'm') {
            // For adult males
            if (bmi < 20) {
                cout << "You are underweight for a male." << endl;
            } else if (bmi >= 20 && bmi <= 25) {
                cout << "You are in the normal weight range for a male." << endl;
            } else {
                cout << "You are overweight for a male." << endl;
            }
        } else if (gender == 'F' || gender == 'f') {
            // For adult females
            if (bmi < 18) {
                cout << "You are underweight for a female." << endl;
            } else if (bmi >= 18 && bmi <= 24) {
                cout << "You are in the normal weight range for a female." << endl;
            } else {
                cout << "You are overweight for a female." << endl;
            }
        }

        // Ask if the user wants to calculate BMI for another person
        attempts = 0;
        cout << "\nWould you like to calculate BMI for another person? (Y for Yes, N for No): ";
        cin >> choice;
        while (choice != 'Y' && choice != 'y' && choice != 'N' && choice != 'n') {
            attempts++;
            if (attempts >= 5) {
                cout << "Too many invalid attempts! Exiting program.\n";
                return 1;
            }
            cout << "Invalid input! Please enter 'Y' for Yes or 'N' for No: ";
            cin >> choice;
        }

    } while (choice == 'Y' || choice == 'y');

    cout << "Thank you for using the BMI calculator. Goodbye!" << endl;
    return 0;
}
