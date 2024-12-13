> **Problem Description**: Write a program that read the various assessments, compute the total mark and print the
> corresponding letter-grade based on the following scales.  
> *Assessments*: Test 15%, Quiz 5%, Project 20%, Assignment 10%, Final exam 50%  
> *Grade-letter scale*: A+ >=90, A >=80, B+ >=75, B >=60, C+ >= 55, C >=45, D >=30, F <30

**Problem Analysis**:  
*Input*: test (float), quiz (float), project (float), assignment (float), final_exam (float)  
*Output*: grade (string)  
*Process*:  
- input test, quiz, project, assignment and final exam
- calculate result as test + quiz + project + assignment + final exam
- if result >= 90 print A+
- else if result >= 80 print A
- else if result >= 75 print B+
- else if result >= 60 print B
- else if result >= 55 print C+
- else if result >= 45 print C
- else if result >= 30 print D
- else print F

**Flowchart**:  
```mermaid
flowchart TD
  start([start]) --> input[/input test, quiz, project, assignment and final exam/]
  input --> process["result = test + quiz + project + assignment + final exam"]
  process --> decision{is result >= 90}
  decision -- yes --> print[/print A+/]
  print --> stop([stop])
  decision -- no --> decision0{is result >= 80}
  decision0 -- yes --> print0[/print A/]
  print0 --> stop
  decision0 -- no --> decision1{is result >= 75}
  decision1 -- yes --> print1[/print B+/]
  print1 --> stop
  decision1 -- no --> decision2{is result >= 60}
  decision2 -- yes --> print2[/print B/]
  print2 --> stop
  decision2 -- no --> decision3{is result >= 55}
  decision3 -- yes --> print3[/print C+/]
  print3 --> stop
  decision3 -- no --> decision4{is result >= 45}
  decision4 -- yes --> print4[/print C/]
  print4 --> stop
  decision4 -- no --> decision5{is result >= 30}
  decision5 -- yes --> print5[/print D/]
  print5 --> stop
  decision5 -- no --> print6[/print F/]
  print6 --> stop 
```
