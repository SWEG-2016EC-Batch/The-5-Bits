#include <iostream>

using namespace std;

int main () {
  float weight, height, BMI;
  int condition;
  cout << "BMI Calculator" << endl;
  do {
    cout << "Input weight in kilograms: ";
    cin >> weight;
    cout << "Input height in metres: ";
    cin >> height;
    BMI = weight/(height * height);
    cout << "BMI = " << BMI << endl;
    if (BMI < 18.5) {
      cout << "Underweight" << endl;
    } else if (BMI >= 25) {
      cout << "Overweight" << endl;
    } else {
      cout << "Normal weight" << endl;
    }
    cout << "Do you want to run the program again(1/0): ";
    cin >> condition;
  } while (condition);
}
