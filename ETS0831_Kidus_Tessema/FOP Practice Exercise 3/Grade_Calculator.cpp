#include <iostream>
using namespace std;

int main () {
    float test_total, quiz_total, assignment_total, project_total, final_total;
    float test_result, quiz_result, assignment_result, project_result, final_result;
    int grade;

    cout << "Welcome" << endl;
    cout << "Please enter how much your test was graded out of" << endl;
    cin >> test_total;
    cout << "Please enter how much you scored on the test" << endl;
    cin >> test_result;

    cout << "Please enter how much your quiz was graded out of" << endl;
    cin >> quiz_total;
    cout << "Please enter how much you scored on the quiz" << endl;
    cin >> quiz_result;
    
    cout << "Please enter how much your assignment was graded out of" << endl;
    cin >> assignment_total;
    cout << "Please enter how much you scored on the assignment" << endl;
    cin >> assignment_result;
    
    cout << "Please enter how much your project was graded out of" << endl;
    cin >> project_total;
    cout << "Please enter how much you scored on the project" << endl;
    cin >> project_result;
    
    cout << "Please enter how much your final exam was graded out of" << endl;
    cin >> final_total;
    cout << "Please enter how much you scored on the final exam" << endl;
    cin >> final_result;

    test_result = (test_result * 15) / test_total;
    quiz_result = (quiz_result * 5) / quiz_total;
    assignment_result = (assignment_result * 10) / assignment_total;
    project_result = (project_result * 20) / project_total;
    final_result = (final_result * 50) / final_total;

    grade = test_result + quiz_result + assignment_result + project_result + final_result;
    cout << "Your total mark is: " << grade << endl;

    cout << "Your Grade is: ";
    if (grade >= 90){
        cout << "A+";
    } else if (grade <90 && grade >= 80) {
        cout << "A";
    } else if (grade <80 && grade >= 75) {
        cout << "B+";
    } else if (grade <75 && grade >= 60) {
        cout << "B";
    } else if (grade <60 && grade >= 55) {
        cout << "C+";
    } else if (grade <55 && grade >= 45) {
        cout << "C";
    } else if (grade <45 && grade >= 30) {
        cout << "D";
    } else {
        cout << "F";
    }
}