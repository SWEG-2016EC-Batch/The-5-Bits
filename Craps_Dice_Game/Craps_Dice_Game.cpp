#include <iostream>

using namespace std;

int main() {
 
  int roll1, roll2, sum1, point,won = 0,lost = 0;
        
        cout<< "\tCraps Dice Game\n";
         srand(time(0)); 
        roll1 = (rand() % 6) + 1;
        roll2 = (rand() % 6) + 1;
        sum1 =  roll1 + roll2;
        
        cout  << "You rolled: " << roll1 << " +" <<roll2 << " = " << sum1 << endl;
 
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

return 0;
}
