#include <iostream>
#include <unistd.h>

using namespace std;

int main() {
    int rounds = 0, won = 0, lost = 0, menu;
    string dice[6][5] = {
        {"┌─────────┐", "│         │", "│    •    │", "│         │", "└─────────┘"},  
        {"┌─────────┐", "│ •       │", "│         │", "│       • │", "└─────────┘"},  
        {"┌─────────┐", "│ •       │", "│    •    │", "│       • │", "└─────────┘"},  
        {"┌─────────┐", "│ •     • │", "│         │", "│ •     • │", "└─────────┘"},  
        {"┌─────────┐", "│ •     • │", "│    •    │", "│ •     • │", "└─────────┘"},  
        {"┌─────────┐", "│ •     • │", "│ •     • │", "│ •     • │", "└─────────┘"}
        };

    cout<< "\tCraps Dice Game";

    c:
    cout << "\n1. Play\n2. View history\n0. Exit\n";
    cin >> menu;
    switch (menu) {
        case 1: goto a; break;
        case 2: goto b; break;
        case 0: return 0; break;
        default: return 0; break;
    }

    b:
    cout << "\nHistory\nRounds played: " << rounds << "\nRounds won: " << won << "\nRounds lost: " << lost << "\n" << endl;
    sleep(2);
    goto c;
    
    a:
    int roll[2], sum1 = 0, sum2 = 0, point = 0;

    srand(time(0));
    roll[0] = (rand() % 6) + 1;
    roll[1] = (rand() % 6) + 1;
    sum1 =  roll[0] + roll[1];
     
    cout << "\nRolling the dice...\n";
    sleep(1.5);
    for (int i = 0; i < 5; i++) {
        cout << dice[roll[0] - 1][i] << "   " << dice[roll[1] - 1][i] << endl;
    }         
    cout  << "You rolled: " << roll[0] << " +" <<roll[1] << " = " << sum1 << endl;

    if (sum1 == 7 || sum1 == 11) {
        cout << "You win!\n";
        won++;
    } else if (sum1 == 2 || sum1 == 3 || sum1 == 12) {
        cout << "You lose!\n";
        lost++;
    } else {
        point = sum1;
        cout << "Your point is: " << point << endl;
        while (sum2 != point && sum2 != 7) { 
            roll[0] = (rand() % 6) + 1;
            roll[1] = (rand() % 6) + 1;
            sum2 = roll[0] + roll[1]; 
            cout << "\nRolling the dice...\n";
            sleep(1.5);
            for (int i = 0; i < 5; i++) {
                cout << dice[roll[0] - 1][i] << "   " << dice[roll[1] - 1][i] << endl;
            }                 
            cout << "You rolled: " << roll[0] << " + " << roll[1] << " = " << sum2 << endl;
            }
        if (sum2 == point) {
            cout << "You made your point!\nYou win!" << endl;
            won++;
        } else {
            cout << "You rolled a 7!\nYou lose!" << endl;
            lost++;
            }
    }
    rounds++;
    sleep(2);
    goto c;
}
