/*****************************
Write a program that find the result of the expression `x`^`y` where the value of X and Y are entered by the user.
***************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
 float `x`, `y`, `result`;

   cout<<"please enter the base number ";
   cin>>`x`;
   cout<<"please enter the power number  ";
   cin>>`y`;
  
   result=pow(x,y);
   cout<<"the value of "<< `x` <<" to the power of "<<`y` <<" is "<<result;
 
 return 0;
}
