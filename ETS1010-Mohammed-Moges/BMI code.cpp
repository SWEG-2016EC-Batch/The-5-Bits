#include <iostream>
	
using namespace std;
	
int main (){
		
	float weight, height, BMI,chance_weight , chance_height ;
		
      	string option ;
		
	do {
		 
	 chance_weight = 3;
		 
	 chance_height = 3;
		    
       while (chance_weight > 0){
			
	
  		
	     	cout << "Enter the weight in kg :\n";
		
	    	cin >> weight;
		
	      	if (cin.fail() || weight <= 0){
	      		
	      	cin.clear();

	      	cin.ignore();
	      		
	      	chance_weight--;
			
	        cout << "Invalid input! you have left "<< chance_weight<<" chance"<<endl;
	
         	if(chance_weight == 0){
         		
         	cout << "oops! You have have used all your chances to enter valid input, therefore the program has terminated."<<endl;
         		
         		return 6;
         		
			 }
		}
		
	    	else {
			break;
			
			}
	    }
	    
	    while(chance_height > 0) {
		
		cout << "Enter the height in m :\n";
			
		cin >> height;
			
		if (cin.fail() || height <= 0){
				
		  cin.clear();
				        
		  cin.ignore();
				        
		  chance_height --;
				
		  cout << "Invalid input! you have left "<< chance_height<<"chance"<<endl;
				        
				      		        
		  if(chance_height == 0){
				        	
	          cout << "oops! You have have used all your chances to enter valid input, therefore the program has terminated."<<endl;
							
							
		  return 5;	
		}
						

				
		}
			 
			else {
			
			
			break;
			
		 }
			
	         }

		  BMI = weight / (height * height);
				
		  cout << "BMI = " << BMI << " kg/m^2" << endl;
				
		  if (BMI < 18.5){
					
		  cout << " ooow! you are Under weighted! you should manage your diet! right?\n";
				}
				
		  else if (BMI >= 25){
					
		 cout << " you are Over weighted! you need to do an exercise! \n";

		}
				
		else {
					
		cout << "Congradulations! you are Normal weighted, keep it up!\n";

		}
			
             	cout << "If you want to continue enter 'yes' or 'YES', if not enter any symbol : \n";
	
             	cin >> option;
	
             	if ((option != "yes") && (option != "YES")){
		
	        cout << "You have succesfully terminated the program!\n";
	         	
	       break;
	       }
	
              } 

              while (true);
	
	      return 0;
		
	} 