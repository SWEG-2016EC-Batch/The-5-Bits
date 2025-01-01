#include <iostream>

using namespace std;

int main() {
 
  int roll1, roll2, sum1;
        
        cout<< "\tCraps Dice Game\n";

        rool1 = (rand() % 6) + 1;
        roll2 = (rand() % 6) + 1;
        sum1 =  roll1 + roll2;
        
        cout  << "You rolled: " << roll1 << " +" <<roll2 << " = " << sum1 << endl;

}
