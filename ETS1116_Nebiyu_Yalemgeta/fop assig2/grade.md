# Problem Description  
This program calculates the total mark of a student based on scores from tests, quizzes, projects, assignments, and final exams. It then determines the grade based on predefined thresholds.  

# Problem Analysis  

**Input**:  
- `test` (double): Test score (out of 100)  
- `quiz` (double): Quiz score (out of 100)  
- `project` (double): Project score (out of 100)  
- `assignment` (double): Assignment score (out of 100)  
- `finalExam` (double): Final exam score (out of 100)  

**Output**:  
- `totalMark` (double): Weighted total mark  
- `grade` (char): Letter grade  

**Process**:  
1. Prompt the user to enter scores for the test, quiz, project, assignment, and final exam.  
2. Calculate the total mark using the given weights:  
   - Test: 15%  
   - Quiz: 5%  
   - Project: 20%  
   - Assignment: 10%  
   - Final Exam: 50%  
3. Assign the grade based on the total mark using the following criteria:  
   - `A+`: ≥ 90  
   - `A`: ≥ 80  
   - `B+`: ≥ 75  
   - `B`: ≥ 60  
   - `C+`: ≥ 55  
   - `C`: ≥ 45  
   - `D`: ≥ 30  
   - `F`: < 30  
4. Display the total mark and grade.  

# Flowchart  

```mermaid
flowchart TD
    start([Start]) --> inputScores[/Input test, quiz, project, assignment, and final exam scores/]
    inputScores --> calculateTotal[Calculate totalMark = (test * 0.15) + (quiz * 0.05) + (project * 0.2) + (assignment * 0.1) + (finalExam * 0.5)]
    calculateTotal --> determineGrade{Determine grade based on totalMark}
    determineGrade --> gradeAPlus[/Grade = A+ if totalMark >= 90/]
    determineGrade --> gradeA[/Grade = A if totalMark >= 80 and < 90/]
    determineGrade --> gradeBPlus[/Grade = B+ if totalMark >= 75 and < 80/]
    determineGrade --> gradeB[/Grade = B if totalMark >= 60 and < 75/]
    determineGrade --> gradeCPlus[/Grade = C+ if totalMark >= 55 and < 60/]
    determineGrade --> gradeC[/Grade = C if totalMark >= 45 and < 55/]
    determineGrade --> gradeD[/Grade = D if totalMark >= 30 and < 45/]
    determineGrade --> gradeF[/Grade = F if totalMark < 30/]
    gradeAPlus --> displayResult
    gradeA --> displayResult
    gradeBPlus --> displayResult
    gradeB --> displayResult
    gradeCPlus --> displayResult
    gradeC --> displayResult
    gradeD --> displayResult
    gradeF --> displayResult
    displayResult[/Display totalMark and grade/] --> finish([Finish])

