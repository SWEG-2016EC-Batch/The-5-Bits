#include <iostream>

using namespace std;

int main() {
 
  int roll[2], sum1, sum2, point,won = 0,lost = 0;
        cout<< "\tCraps Dice Game\n";

          string dice[6][5] = {
                               {"┌─────────┐", "│         │", "│    •    │", "│         │", "└─────────┘"},  
                               {"┌─────────┐", "│ •       │", "│         │", "│       • │", "└─────────┘"},  
                               {"┌─────────┐", "│ •       │", "│    •    │", "│       • │", "└─────────┘"},  
                               {"┌─────────┐", "│ •     • │", "│         │", "│ •     • │", "└─────────┘"},  
                               {"┌─────────┐", "│ •     • │", "│    •    │", "│ •     • │", "└─────────┘"},  
                               {"┌─────────┐", "│ •     • │", "│ •     • │", "│ •     • │", "└─────────┘"}
                            };
         srand(time(0)); 
        roll[0] = (rand() % 6) + 1;
        roll[1] = (rand() % 6) + 1;
        sum1 =  roll[0] + roll[1];
         
        cout << "\nRolling the dice...\n";
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
        }
 while (sum2 != point && sum2 != 7) {
               roll[0] = (rand() % 6) + 1;
               roll[1] = (rand() % 6) + 1;
                sum2 = roll[0] + roll[1]; 
            cout << "\nRolling the dice...\n";
        for (int i = 0; i < 5; i++) {
            cout << dice[roll[0] - 1][i] << "   " << dice[roll[1] - 1][i] << endl;
        }                 
        cout << "You rolled: " << roll[0] << " + " << roll[1] << " = " << sum2 << endl;
        }
            if (sum2 == point) {
                cout << "You made your point!\nYou win!" << endl;
            } else {
                cout << "You rolled a 7!\nYou lose!" << endl;
            }
return 0;
}
