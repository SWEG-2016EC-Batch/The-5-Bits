#include <iostream>
using namespace std;

int main() {
	cout << "GRADE CALCULATOR OF A STUDENT\n__________________________________" << endl;
	float test, quiz, project, assignment, final_exam, total;

	cout << "Enter the mark you get in test out of 15%: ";
	cin >> test;
	cout << "Enter the mark you get in quiz out of 5%: ";
	cin >> quiz;
	cout << "Enter the mark you get in project out of 20%: ";
	cin >> project;
	cout << "Enter the mark you get in assignment out of 10%: ";
	cin >> assignment;
	cout << "Enter the mark you get in your final exam out of 50%: ";
	cin >> final_exam;

	total = test + quiz + assignment + project + final_exam;
	cout << "You have a total of " << total << " out of 100." << endl;

		if (total >= 90) {
			cout << "Your grade for a mark of " << total << " would be \"A+\"." << endl;
		} else if (total >= 85) {
			cout << "Your grade for a mark of " << total << " would be \"A\"." << endl;
		} else if (total >= 75) {
			cout << "Your grade for a mark of " << total << " would be \"A\"." << endl;
		} else if (total >= 60) {
			cout << "Your grade for a mark of " << total << " would be \"B+\"." << endl;
		} else if (total >= 55) {
			cout << "Your grade for a mark of " << total << " would be \"B\"." << endl;
		} else if (total >= 45) {
			cout << "Your grade for a mark of " << total << " would be \"C+\"." << endl;
		} else if (total >= 30) {
			cout << "Your grade for a mark of " << total << " would be \"C\"." << endl;
		} else {
			cout << "Your grade for a mark of " << total << " would be \"D\"." << endl;
		}

		return 0;
	
}
