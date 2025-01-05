#include <iostream>
#include <unistd.h>
#include <string>

using namespace std;

int main() {
    //declare and initialize variables
    string input;
    int rounds = 0, won = 0, lost = 0, menu;
    string dice[6][5] ={
        {"┌---------┐", "|         |", "|    *    |", "|         |", "└---------┘"},  
        {"┌---------┐", "| *       |", "|         |", "|       * |", "└---------┘"},  
        {"┌---------┐", "| *       |", "|    *    |", "|       * |", "└---------┘"},  
        {"┌---------┐", "| *     * |", "|         |", "| *     * |", "└---------┘"},  
        {"┌---------┐", "| *     * |", "|    *    |", "| *     * |", "└---------┘"},  
        {"┌---------┐", "| *     * |", "| *     * |", "| *     * |", "└---------┘"}
    };

    //game title
    cout<< "\tCraps Dice Game";

    //menu
    c:
    cout << "\n1. Play\n2. View history\n0. Exit\n";
    cin >> menu;
    system ("cls");
    switch (menu) {
        case 1: goto a; break;
        case 2: goto b; break;
        case 0: return 0; break;
        default: goto c; break;
    }

    //history
    b:
    cout << "\n--------------------";
    cout << "\nRounds played\t| " << rounds << "\nWon\t\t| " << won << "\nLost\t\t| " << lost; 
    cout << "\n--------------------" << endl;
    sleep(2);
    //go back to the menu
    goto c;

    //game
    a:
    //declare and initialize variables
    int roll[2], sum1 = 0, sum2 = 0, point = 0;
    //generate random numbers for dice rolls
    srand(time(0));
    roll[0] = (rand() % 6) + 1;
    roll[1] = (rand() % 6) + 1;
    //add dice rolls
    sum1 =  roll[0] + roll[1];
    //print dice as picture
    getline(cin,input);
    system ("cls");
    cout << "\nRolling the dice...\n";
    sleep(1.5);
    for (int i = 0; i < 5; i++) {
        cout << dice[roll[0] - 1][i] << "   " << dice[roll[1] - 1][i] << endl;
    }
    //print dice as text
    cout  << "You rolled: " << roll[0] << " + " <<roll[1] << " = " << sum1 << endl;
    //check sum against game rules
    if (sum1 == 7 || sum1 == 11) {
        cout << "You win!\n";
        //update number of rounds won
        won++;
    } else if (sum1 == 2 || sum1 == 3 || sum1 == 12) {
        cout << "You lose!\n";
        //update number of rounds lost
        lost++;
    } else {
        //store point
        point = sum1;
        //print point
        cout << "Your point is: " << point << endl;
        //roll dice until the point or 7 is rolled
        while (sum2 != point && sum2 != 7) {
            //prompt user to press ENTER to roll
            cout << "Press ENTER to roll again";
            getline (cin,input);
            system ("cls");
            //generate random numbers for dice rolls
            roll[0] = (rand() % 6) + 1;
            roll[1] = (rand() % 6) + 1;
            //add dice rolls
            sum2 = roll[0] + roll[1];
            //print dice as picture
            cout << "\nRolling the dice...\n";
            sleep(1.5);
            for (int i = 0; i < 5; i++) {
                cout << dice[roll[0] - 1][i] << "   " << dice[roll[1] - 1][i] << endl;
            }
            //print dice as text
            cout << "You rolled: " << roll[0] << " + " << roll[1] << " = " << sum2 << endl;
            }
        //check sum against game rules
        if (sum2 == point) {
            cout << "You made your point!\nYou win!" << endl;
            //update number of rounds won
            won++;
        } else {
            cout << "You rolled a 7!\nYou lose!" << endl;
            //update number of rounds lost
            lost++;
        }
    }
    //update number of rounds played
    rounds++;
    sleep(2);
    //go back to the menu
    goto c;
}
