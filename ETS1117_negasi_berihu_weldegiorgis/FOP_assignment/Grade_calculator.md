# Problem description
*Write a program that read the various assessments, compute the total mark and print the
corresponding letter-grade based on the following scales.*

*Assessments
➢ Test 15%, Quiz 5%, Project 20%, Assignment 10%, Final exam 50%*
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


