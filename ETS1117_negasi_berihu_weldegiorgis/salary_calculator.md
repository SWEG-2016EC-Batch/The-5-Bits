# Problem Statement: 
Design an algorithm and write a to read an employee name weekly working hours, bonus rate per hour and base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%, tax: 15%).

##  A) Problem Analysis:
###  1. Inputs:
- Employee name.
- Weekly working hours.
- Bonus rate per hour.
- Base salary.
  
### 3. Process:
 * prompting and accepting inputs.
* Bonus Payment:
  * Bonus_Payment=Weekly_Working_Hours*Bonus_Rate_per_Hour
* Gross Salary:
  * Gross_Salary =Base_Salary +Bonus_Payment
* Pension Deduction (5% of Gross Salary):
  * Pension=0.05×Gross_Salary 
* Tax Deduction (15% of Gross Salary):
  * Tax=0.15×Gross_Salary
* Net Salary:
  * Net Salary=Gross_Salary−(Pension+Tax)
* displaying prompt messages and uotputs.


### B)  pseudocode
1. Start
2. Input employee_name
3. Input weekly_hours
4. Input bonus_rate
5. Input base_salary

6. Calculate bonus_payment = weekly_hours * bonus_rate
7. Calculate gross_salary = base_salary + bonus_payment
8. Calculate pension = 0.05 * gross_salary
9. Calculate tax = 0.15 * gross_salary
10. Calculate net_salary = gross_salary - (pension + tax)

11. Output employee_name, gross_salary, bonus_payment, and net_salary
12. End



## C) flow chart


