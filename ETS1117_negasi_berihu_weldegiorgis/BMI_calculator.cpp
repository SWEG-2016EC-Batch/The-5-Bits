#include <iostream>
using namespace std;

int main() {
    float weight, height, BMI;
    cout<< "This is a BMI calculator. "<<endl;
    while (true) {
        cout << "\nEnter your weight in kg or \"0\" to stop: ";
        cin >> weight;

        if (weight == 0) {
            cout << "Exiting the BMI calculator. Goodbye!\n";
            break;
        }

        if (weight < 0) {
            cout << "Weight must be greater than zero. Try again.\n";
            continue;  
        }

        cout << "Enter your height in meters: ";
        cin >> height;

        if (height <= 0) {
            cout << "Height must be greater than zero. Try again.\n";
            continue;  
        }

        BMI = weight / (height * height);
        cout << "Your BMI is: " << BMI << endl;

        if (BMI < 18.5) {
            cout << "Status: Underweight\n";
        } else if (BMI >= 18.5 && BMI <= 24.9) {
            cout << "Status: Normal weight\n";
        } else {
            cout << "Status: Overweight\n";
        }

        cout << "----------------------------------\n";
    }

    return 0;
}
