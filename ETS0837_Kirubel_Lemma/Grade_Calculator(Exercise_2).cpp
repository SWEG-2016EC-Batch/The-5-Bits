#include <iostream>

using namespace std;

int main () {
    float test, quiz, project, assignment, final_exam, result;
    
    cout << "Grade Letter Calculator" << endl;
    cout << "Enter test results: ";
    cin >> test;
    cout << "Enter quiz results: ";
    cin >> quiz;
    cout << "Enter project results: ";
    cin >> project;
    cout << "Enter assignment results: ";
    cin >> assignment;
    cout << "Enter final exam results: ";
    cin >> final_exam;

    result = test + quiz + project + assignment + final_exam;
    
    if (result >= 90) cout << "Grade = A+";
    else if (result >= 80) cout << "Grade = A";
    else if (result >= 75) cout << "Grade = B+";
    else if (result >= 60) cout << "Grade = B";
    else if (result >= 55) cout << "Grade = C+";
    else if (result >= 45) cout << "Grade = C";
    else if (result >= 30) cout << "Grade = D";
    else cout << "Grade = F";
}
