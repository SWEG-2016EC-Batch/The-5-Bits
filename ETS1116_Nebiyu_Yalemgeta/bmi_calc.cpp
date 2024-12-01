#include <iostream>
using namespace std;

int main() {
    int numPersons;
    cout << "Enter the number of people to calculate BMI for: ";
    cin >> numPersons;

    for (int i = 1; i <= numPersons; i++) {
        cout << "\nPerson " << i << ":\n";

        float weight, height, bmi;

        while (true) {
            cout << "Enter weight in kilograms (e.g., 70): ";
            cin >> weight;
            if (weight > 0) break;
            cout << "Invalid input. Please enter a positive number for weight.\n";
        }

   
        while (true) {
            cout << "Enter height in meters (e.g., 1.75): ";
            cin >> height;
            if (height > 0) break;
            cout << "Invalid input. Please enter a positive number for height.\n";
        }

  
        bmi = weight / (height * height);

        cout << "BMI: " << bmi << " - ";
        if (bmi < 18.5)
            cout << "Underweight\n";
        else if (bmi >= 18.5 && bmi <= 24.9)
            cout << "Normal weight\n";
        else
            cout << "Overweight\n";
    }

    cout << "\nAll BMI calculations are complete.\n";
    return 0;
}
