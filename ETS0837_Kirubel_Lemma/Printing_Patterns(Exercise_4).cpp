#include <iostream>

using namespace std;

int main () {
    int width, height, temp, gap;
    char letter = 'A';

    cout << "Enter width: ";
    cin >> width;
    cout << "Enter height: ";
    cin >> height;
    cout << endl;

    //filled square with numbers
    for (int j = 1; j <= height; j++) {
        for (int i = 1; i <= width; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;
    
    //filled square with letters
    for (int j = 1; j <= height; j++) {
        for (int i = 1; i <= width; i++) {
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }
    letter = 'A';
    cout << endl;

    //half pyramid with numbers
    for (int j = 1; j <= height; j++) {
        for (int i = 1; i <= j; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
    cout << endl;

    //laterally inverted half pyramid with numbers
    for (int j = 1; j <= height; j++) {
        for (int i = 1; i <= (height - j); i++) {
            cout << "  ";
        }
        for (int i = 0; i < j; i++) {
            temp = j;
            cout << (j - i) << " ";
        }
        j = temp;
        cout << endl;
    }
    cout << endl;

    //half pyramid with letters
    for (int j = 1; j <= height; j++) {
        for (int i = 1; i <= j; i++) {
            cout << letter << " ";
            letter++;
        }
        letter = 'A';
        cout << endl;
    }
    cout << endl;

    //filled square with letters
    letter = 'a';
    for (int j = 1; j <= height; j++) {
        for (int i = 1; i <= width; i++) {
            cout << letter << " ";
            letter++;
        }
        letter = 'a';
        cout << endl;
    }
    cout << endl;

    //hollow square with asterisk
    for (int j = 1; j <= height; j++) {
        if (j == 1 || j == height) {
            for (int i = 1; i <= width; i++) {
                cout << "* ";
            }
            cout << endl;
        } else {
            cout << "* ";
            for (int i = 0; i < (width - 2); i++) {
                cout << "  ";
            }
            cout << "*" << endl;
        }
    }
    cout << endl;

    //inverted half pyramid with asterisk
    for (int j = 0; j < height; j++) {
        for (int i = 1; i <= (height - j); i++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //hollow inverted half pydramid with asterisk
    for (int j = 0; j < height; j++) {
        if (j == 0) {
            for (int i = 1; i <= height; i++) {
                cout << "* ";
            }
            cout << endl;
        } else if (j == (height - 1)) cout << "*" << endl;
        else {
            cout << "* ";
            for (int i = 0; i < (height - j - 2); i++) {
                cout << "  ";
            }
            cout << "*" << endl;
        }
    }
    cout << endl;

    //full pyramid with asterisk
    gap = height - 1;
    for (int j = 0; j < height; j++) {
        for (int i = 0; i < gap; i++) {
            cout << " ";
        }
        gap--;
        for (int i = 0; i <= j; i++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //inverted full pyramid with asterisk
    gap = height - 1;
    temp = gap;
    for (int j = 0; j < height; j++) {
        for (int i = 0; i < (temp - gap); i++) {
            cout << " ";
        }
        gap--;
        for (int i = 0; i < (height - j); i++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl;

    //hollow full pyramid with asterisk
    gap = height - 1;
    for (int j = 0; j < height; j++) {
        for (int i = 0; i < gap; i++) {
            cout << " ";
        }
        gap--;
        if (j == (height - 1)) {
            for (int i = 0; i <= j; i++) {
                cout << "* ";
            }
            cout << endl;
        } else if (j == 0) cout << "*" << endl;
        else {
            cout << "* ";
            for (int i = 0; i < (j - 1); i++) {
                cout << "  ";
            }
            cout << "*" << endl;
        }
    }
    cout << endl;
}
