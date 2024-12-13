#include <iostream>
using namespace std;

int main () {
    int row, column;
    char character = 'A';
    
    cout << "1st pattern" << endl;
    for (row = 1; row <= 5; row++) {
        for (column = 1; column <= 6; column++) {
            cout << column << " ";
        } cout << endl;
    }
    cout << endl;
    cout << "2nd pattern" << endl;
    for (row = 1; row <= 4; row++) {
        for (column = 1; column <= 6; column++) {
            cout << character << " ";
            character++;
        } cout << endl;
    }
    cout << endl;
    cout << "3rd pattern" << endl;
    for (row = 1; row <= 5; row++) {
        for (column = 1; column <= row; column++) {
            cout << column << " ";
        } cout << endl;
    }
    cout << endl;
    cout << "4th pattern" << endl;
    for (row = 1; row <= 5; row++) {
        for (column = 1; column <= 5 - row; column++) {
            cout << "  " ; 
        }
        for (int i = row; i >= 1; i--) {
            cout << i << " "; 
        } cout << endl;
    }
    cout << endl;
    cout << "5th pattern" << endl;
    character = 'A';
    for (row = 1; row <= 5; row++) {
        for (column = 1; column <= row; column++) {
            cout << character << " ";
            character++;
        } 
        character = 'A';
        cout << endl;
    }
    cout << endl;
    cout << "6th pattern" << endl;
    character = 'a';
    for (row = 1; row <= 5; row++) {
        for (column = 1; column <= 5; column++) {
            cout << character << " ";
            character++; 
            if (character > 'e') { 
                character = 'a'; 
            }
        } cout << endl;
    }
    cout << endl;
    cout << "7th pattern" << endl;
    for (int row = 1; row <= 5; row++) {
        for (column = 1; column <= 5; column++) {
            if (row == 1 || row == 5) {
                cout << "* ";
            } else if (column == 1 || column == 5) {
                cout << "* ";
            } else {
                cout << "  "; 
            }
        } cout << endl;
    }
    cout << endl;
    cout << "8th pattern" << endl;
    for (row = 6; row >= 1; row--) {
        for (column = 1; column <= row; column++) {
            cout << "* ";
        } cout << endl;
    }
    cout << endl;
    cout << "9th pattern" << endl;
    for (row = 6; row >= 1; row--) {
        for (column = 1; column <= row; column++) {
            if (column == 1 || column == row) {
                cout << "* ";
            } else if (row == 6) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        } cout << endl;
    }
    cout << endl;
    cout << "10th pattern" << endl;
    for (row = 1; row <= 5; row++) {
        for (column = 1; column <= 5 - row; column++) {
            cout << "  "; 
        }
        for (int i = 1; i <= ((row * 2) - 1); i++) {
            if (i % 2 == 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        } cout << endl;
    }
    cout << endl;
    cout << "11th pattern" << endl;
    for (row = 5; row>= 1; row--) {
        for (column = 1; column <= 5 - row; column++) {
            cout << "  "; 
        }
        for (int i = 1; i <= ((row * 2) - 1); i++) {
            if (i % 2 == 1) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        } cout << endl;
    }
    cout << endl;
    cout << "12th pattern" << endl;
    for (row = 1; row <= 5; row++) {
        for (column = 1; column <= 5 - row; column++) {
            cout << "  "; 
        }
        for (int i = 1; i <= ((row * 2) - 1); i++) {
            if (i == 1 || i == ((row * 2) - 1)) {
                cout << "* ";
            } else if (row == 5) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        } cout << endl;
    }
} 


