<h2>Grade Calculator</h2>
<h3>Problem</h3>
Write a program that read the various assessments, compute the total mark and print the corresponding letter-grade based on the following scales.

<h3>Problem Analysis</h3>
<strong>Input</strong> - <br>
test results, quiz results, assignment results, project results, final exam results <br>
total marks of the test, total marks of the quiz, total marks of the assignment, total marksof the project, total marks of the final exam <br>
<strong>Output</strong> - GPA<br>
<strong>Process</strong> - <br>
Accepting inputs <br>
recalculating results as (results * corresponding percentage taken)/total marks for each input <br>
calculating sum of these results <br>
checking the value of GPA by checking where the sum reside with in a range of numbers <br>

<h3>Pseudocode</h3>
1. START <br>
2. ACCEPT test_total, quiz_total, assignment_total, project_total, final_total <br>
3. ACCEPT test_result, quiz_result, assignment_result, project_result, final_result <br>
4. CALCULATE test_result as "test_result * 15/test_total" <br>
5. CALCULATE quiz_result as "quiz_result * 15/quiz_total" <br>
6. CALCULATE project_result as "project_result * 15/project_total" <br>
7. CALCULATE assignment_result as "assignment_result * 15/assignment_total" <br>
8. CALCULATE final_result as "final_result * 15/final_total" <br>
9. CALCULATE sum as "sum = test_result + quiz_result + assignment_result + project_result + final_result" <br>
10. CHECK sum <br>
  10.1 IF sum >= 90, print 'A+' <br>
  10.2 IF sum < 90 & >= 80, print 'A' <br>
  10.3 IF sum < 80 & >= 75, print 'B+' <br>
  10.4 IF sum < 75 & >= 60, print 'B' <br>
  10.5 IF sum < 60 & >= 55, print 'C+' <br>
  10.6 IF sum < 55 & >= 45, print 'C' <br>
  10.7 IF sum < 45 & >= 30, print 'D' <br>
  10.8 IF sum < 30, print 'F' <br>
11. Print sum <br>
12. END

