
#include <iostream>


using namespace std;

int main (){
	
	 long int size, total_seconds,days,hours,minutes,seconds;
	
	
	cout << "Enter the size of the file in byte : \n";
	
	cin >> size;
	
	if(cin.fail()||size <= 0){
		
		cout <<"Invalid input!\n";
		
		return 0;
		
	}
	
	else{
		
		total_seconds = size /960;
		
		days =  total_seconds /(24*3600);
		
		hours =  (total_seconds %(24*3600))/3600;
		
		minutes = ((total_seconds %(24*3600))%3600)/60;
		
		seconds = ((total_seconds %(24*3600))%3600)%60;
		
		cout << "It takes "<<days<<" day :"<<hours<<" hour :"<<minutes<<" minute :"<<seconds<<" second, to transfer "<<size << " byte file\n";
		
	}
  return 0;
	
}
