> **Problem Description**: Develop a program that find the Net-Pay of an employee after deduction of pension (7%) and tax based on tax rate provided. The
> program should read the basic salary, worked hours, and bonus rate. If the employee worked hours exceed 40 hrs., the program prompts the user to enter an
> over-time bonus rate/hour.
> 
> *Tax Rate Range*:  
> Up to 200Br:    0%  
> 200Br-600Br:    10%  
> 600Br-1200Br:   15%  
> 1200Br-2000Br:  20%  
> 2000Br-3500Br:  25%  
> 3500Br & above: 30%
>
> gross salary = basic salary + bonus  
> bonus = extra work-hours * bonus rate  
> pension = basic salary * 0.07  
> tax = gross salary * tax rate  
> net salary = gross salary - pension - tax
 ## Problem analysis
 ### Input
  test,quiz,assignment,project,final exam.
 ### process
 1  computing total =test + quiz + project + assignment + final_exam.
 2 calculating grade.
 
 ### Output
 .
1. the total mark out of 100
2. grade of the calculated total mark.

## Pseudocode
1. Start
5. Read the marks of test, quiz, project,assignment and .inal_exam
14. Calculate total = test + quiz + project + assignment + final_exam.
15. Display total out of 100."
16. Check the value of total:
    1. If total >= 90, grade_mark = "A+"
    2. Else if total >= 85, grade_mark = "A"
    3.  Else if total >= 75, grade_mark = "B+"
    4.  Else if total >= 60, grade_mark = "B+"
    5.  20. Else if total >= 55, grade_mark = "B"
    6.   Else if total >= 45, grade_mark = "C+"
    7.   Else if total >= 30,  grade_mark = "C"
    8.   otherwise grade_mark = "D"
24. Display "Your grade for a mark of [total] would be [grade_mark]."
25. End


