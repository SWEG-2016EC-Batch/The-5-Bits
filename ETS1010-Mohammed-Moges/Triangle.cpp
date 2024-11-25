#include <iostream>
using namespace std;
int main (){
    char alph;
    cout << "Enter the last alphabet : ";
    cin >> alph;
    for (char i = 'a' ; i <= alph ; i ++){
        for (char j = 'a';j <= i; j++){
            cout << " "<<j;
        }
        cout <<endl;
    }
}
