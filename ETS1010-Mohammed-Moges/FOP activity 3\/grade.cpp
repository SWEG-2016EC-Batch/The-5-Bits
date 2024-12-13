#include <iostream>

using namespace std;

int main (){
    
    double mark_test,mark_quiz,mark_project,mark_assignment,mark_final,total_mark;
    
    string grade;
    
    cout << "Enter the test result : ";
    
    cin >> mark_test;
    
    if (cin.fail()||mark_test < 0||mark_test > 15){
        
       x: cout << "\nInvalid input!";
       
        return 0;
        
    }
    else {
        
       cout << "Enter the quiz result : ";
       
    cin >> mark_quiz;
    
    if (cin.fail()||mark_quiz < 0||mark_quiz > 5) {
        
        goto x;
        
    }
    
    else{
        
        cout << "Enter the project result : ";
        
    cin >> mark_project;
    
    if (cin.fail()||mark_project < 0||mark_project > 20){
        
        goto x;
        
    }
    
    else {
        
        cout << "Enter the assignment result : ";
        
    cin >> mark_assignment;
    
    if (cin.fail()||mark_assignment < 0||mark_assignment > 10){
        
        goto x;
        
    }
    
    else {
        
        cout << "Enter the final test result : ";
        
    cin >> mark_final;
    
    if (cin.fail()||mark_final < 0||mark_final > 50){
        
        goto x;
    }
    
    else {
        
        total_mark = mark_test + mark_quiz + mark_project + mark_assignment + mark_final;
        
        cout << "\nThe total mark out of 100 is : "<<total_mark;
        
        if (total_mark >= 90 ){
            
            grade = "A+";
            
            cout << "\nThe grade is : "<<grade;
        }
        
        else if (total_mark >= 80 ){
            
            grade = "A";
            
            cout << "\nThe grade is : "<<grade;
        }
        
        else if (total_mark >= 75 ){
            
            grade = "B+";
            
            cout << "\nThe grade is : "<<grade;
            
        }
        
        else if (total_mark >= 60 ){
            
            grade = "B";
            
            cout << "\nThe grade is : "<<grade;
            
        }
        
        else if (total_mark >= 55 ){
            
            grade = "C+";
            
            cout << "\nThe grade is : "<<grade;
        }
        
        else if (total_mark >= 45 ){
            
            grade = "C";
            
            cout << "\nThe grade is : "<<grade;
        }
        
        else if (total_mark >= 30 ){
            
            grade = "D";
            
            cout << "\nThe grade is : "<<grade;
        }
        
        else {
            
            grade = "F";
            
            cout << "\nThe grade is : "<<grade;
            
     }
        
    }
    
    }
    
    }
    
    }
    
    }
  return 0;
}
