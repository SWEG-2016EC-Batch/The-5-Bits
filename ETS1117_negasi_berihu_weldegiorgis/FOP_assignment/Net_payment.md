# Problem description
*Develop a program that find the Net-Pay of an employee after deduction of pension (7%) and tax based on tax rate provided. The program should read the basic salary, worked hours, and bonus rate. If the employee worked hours exceed 40 hrs., the program
prompts the user to enter an over-time bonus rate/hour.*

## Input 
  * Basic Salary (basc_slry): The base income of the employee.
  * Bonus Rate (bonus_rate):A percentage of the basic salary added as a bonus.
  * Worked Hours (wrked_hrs):The total hours worked in a week.
  * Overtime Bonus Rate (overtime_bonus_rate) if worked hours exceeds 40

## Outputs
 * Gross Salary: Total income before deductions, including basic salary, bonuses, and overtime.
 * Pension Deduction:7% of the basic salary deducted for retirement savings.
 * Tax Deduction: Based on a progressive tax system with rates depending on the gross salary.
 * Net Pay: The final take-home salary after deductions.
## processes
+ Gross Salary:
+ Total income before deductions
    * Pension Deduction= basic salary * pension;
    * bonus=basic salary * bones rate;
    * extra hours=worked_hrs-40;
    * overtime bonus= overtime bonus rate * extra hours;
    * gross sallary = basic salary + bonus+ overtime bonus;
    * tax deduction= gross sallary * taxrate;
    * net payment = gross sallary -tax deduction- pension deduction;

## Pseudocode 
1. START
3. Accept bonus rate,basic salary, worked hours, overtime_bonus_rate.
2. Initialize gross salary to basic salley, pension_rate = 0.07.
3. proceed each of the following calculations.
    * Pension Deduction= basic salary * pension;
    * bonus=basic salary * bones rate;
    * extra hours=worked_hrs-40;
    * overtime bonus= overtime bonus rate * extra hours;
    * gross sallary = basic salary + bonus+ overtime bonus;
    * tax deduction= gross sallary * taxrate;
    * net payment = gross sallary -tax deduction- pension deduction;
4.  END



