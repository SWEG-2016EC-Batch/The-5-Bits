#include <iostream>	

using namespace std;

int main (){

float cap_fuel, mile_perGallon, num_miles;

cout << "Enter the capacity of fuel tank in gallon :\n";

cin >> cap_fuel;

if (cin.fail() || cap_fuel <= 0){

a : cout << "Invalid input!\n";

}

else {

cout << "Enter the miles that an automible can be driven per one gallon :\n";

cin >> mile_perGallon;

if (cin.fail() || mile_perGallon <=0 ){
 
 goto a;
 
}

else {

num_miles = cap_fuel * mile_perGallon; 


cout << "The automobile can travel " << num_miles << " miles" <<endl; 

}

}



return 0;

}		
        	
