#include<iostream>
#include <cmath>
using namespace std;
int main() {
    int choice;
while(true)  { 
    
        cout << "\nMenu:" << endl;
        cout << "1. Reverse the number" << endl;
        cout << "2. Count the number of digits" << endl;
        cout << "3. Product of even digits" << endl;
        cout << "4. First and last digits and their sum" << endl;
        cout << "5. Swap the first and last digits" << endl;
        cout << "6. Check if the number is a palindrome" << endl;
        cout << "7. Frequency of digits" << endl;
        cout << "8. Check if the number is a strong number" << endl;
        cout << "9. Check if the number is a perfect number" << endl;
        cout << "10. Exit" << endl;
        
        cout << "Enter your choice: ";
        cin >> choice;
        
        if(choice==10)
          break;
    
    
	int number,factorial, firstnumber, reverse = 0, i = 0, product = 1;
	cout << "Enter the integer: ";
	cin >> number;
	
	int lastDigit = number % 10, digitFrequency[10] = {0},sum = 0, originalNumber = number;
	

	while (number != 0) {
		int digit = number % 10;

		factorial = 1;  
		for (int k = 1; k <= digit; k++) {
			factorial *= k;
		    }
		    sum += factorial;

	     	if (digit % 2 == 0) {
		    	product *= digit;
	           }

		    reverse = reverse * 10 + digit;

	    	firstnumber = digit;

		    digitFrequency[digit]++;

	    	number /= 10;
	    	i++;
    	}

	int swappednumber, middle_number;
	middle_number = originalNumber - ((firstnumber * pow(10, (i - 1))) + lastDigit);
	swappednumber = lastDigit * pow(10, (i - 1)) + middle_number + firstnumber;

switch(choice) {
    
// a- Reverse
	
	case 1:
	     cout << "The reverse of " << originalNumber << " is: " << reverse << endl;
         break;
         
// b- Number of digits
	
	case 2:
      	cout << "The number of digits in " << originalNumber << " is " << i << endl;
        break;
        
// c- Product of even digits

	case 3:
	     cout << "The product of even digits in " << originalNumber << " is " << product << endl;
         break;
         
// d- First and last digits
	
	case 4:
      	 cout << "The first digit of " << originalNumber << " is " << firstnumber
	          << " and its last digit is " << lastDigit
	          << " and their sum is " << firstnumber + lastDigit << endl;
         break;
         
// e- Swapped number

	case 5:
	     cout << "The new number of " << originalNumber << " after its first and last digits are swapped is " << swappednumber << endl;
         break;
         
// f- Palindrome check

	case 6:  {
	    if (originalNumber == reverse) {
		   cout << originalNumber << " is a palindrome." << endl;
    	} else {
		      cout << originalNumber << " is not a palindrome." << endl;
        	}
    	}
	break;

// g- Digit Frequency Table

	case 7: {
      	cout << "\nDigit Frequency Table:" << endl;
    	cout << "Digit\tFrequency" << endl;
    	
    	for (int d = 0; d < 10; d++) {
		   if (digitFrequency[d] > 0) {
			   cout << d << "\t" << digitFrequency[d] << endl;
		       }
     	  }
	    
	   }
	break;
	
// h- Strong number check

	case 8: {
     	if (sum == originalNumber) {
	    	cout << originalNumber << " is a strong number because " << sum << " is equal to it." << endl;
    	} else {
		      cout << originalNumber << " is not a strong number because " << sum << " is not equal to it." << endl;
	          }
    	}
	     break;
	     
//j - Check whether a number is Perfect number or not.

    case 9: {
         	int divisorSum = 0;
	       for (int i = 1; i <= originalNumber / 2; i++) {
		      if (originalNumber % i == 0) {
		        divisorSum += i;
		       } 
    	     }

        	if (divisorSum == originalNumber) {
	        	cout << originalNumber << " is a perfect number." << endl;
        	} else {
		         cout << originalNumber << " is not a perfect number." << endl;
             	}
        
             }
        	break;
	
	 default:
              cout << "Invalid choice! Please try again." << endl;
      }
  }
	return 0;
}
