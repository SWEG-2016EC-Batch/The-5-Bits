#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi;
    char choice;

    do {
        cout << "Enter your weight (in kilograms): ";
        cin >> weight;

        cout << "Enter your height (in meters): ";
        cin >> height;

        bmi = weight / (height * height);

        if (bmi < 18.5) {
            cout << "Your BMI is " << bmi << ". You are underweight." << endl;
        } else if (bmi >= 18.5 && bmi <= 24.9) {
            cout << "Your BMI is " << bmi << ". You have a normal weight." << endl;
        } else {
            cout << "Your BMI is " << bmi << ". You are overweight." << endl;
        }

        cout << "Do you want to calculate BMI for another person? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the BMI calculator!" << endl;
    return 0;
}
