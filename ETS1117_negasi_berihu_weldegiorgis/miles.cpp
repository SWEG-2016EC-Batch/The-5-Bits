/******************************************************************************

2. Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons
the automobiles can be driven. The program outputs the number miles the automobile cam be driven
without refueling.

*******************************************************************************/
#include <iostream>
using  namespace std;

int main()
 {
  float  cap_in_gallons, miles_per_gallons , tot_number_miles;
  
  cout<<"please enter the miles per gallons the automobiles can be driven ";
  cin>>miles_per_gallons;
  
  cout<<"Please enter the capacity in gallons of an automobile fuel tank ";
  cin>>cap_in_gallons;
   
  tot_number_miles=miles_per_gallons * cap_in_gallons;
  
  cout<<"The number miles of the automobile cam be driven without refueling is  "<<tot_number_miles;
    return 0;
}
