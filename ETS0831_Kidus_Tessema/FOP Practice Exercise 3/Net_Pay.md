<h2>Net Salary Calculator</h2>
<h3>Problem</h3>
Develop a program that find the Net-Pay of an employee after deduction of pension (7%) and tax based on tax rate provided. The
program should read the basic salary, worked hours, and bonus rate. If the employee worked hours exceed 40 hrs., the program
prompts the user to enter an over-time bonus rate/hour.

<h3>Problem Analysis</h3>
<strong>Input</strong> - <br>
basic_salary, working_hours, bouns_rate <br>
<strong>Output</strong> - Net_Salary<br>
<strong>Process</strong> - <br>
Accepting inputs <br>
Checking value of basic_salary to assign income_tax_rate <br>
Checking value of working hours to see if it exceeds 40 hours and whether there is a bouns or not and calculating bouns as bouns = (working_hours - 40) * bouns_rate <br>
Calculating - <br>
gross_salary as gross_salary = basic_salary + bouns <br>
pension as pension = basic_salary * pension_rate <br>
income_tax as income_tax = gross_salary * income_tax_rate <br>
net_salary as net_salary = gross_salary - (pension + income_tax) <br>

<h3>Pseudocode</h3>
1. START <br>
2. ACCEPT basic_salary, working_hours, bouns_rate <br>
3. CHECK basic_salary <br>
3.1. IF basic_salary > 0 & basic_salary <= 200, income_tax_rate = 0 <br>
3.2. IF basic_salary > 200 & basic_salary <= 600, income_tax_rate = 0.10 <br>
3.3. IF basic_salary > 600 & basic_salary <= 1200, income_tax_rate = 0.15 <br>
3.4. IF basic_salary > 1200 & basic_salary <= 2000, income_tax_rate = 0.20 <br>
3.5. IF basic_salary > 2000 & basic_salary <= 3500, income_tax_rate = 0.25 <br>
3.6. IF basic_salary > 3500, income_tax_rate = 0.30 <br>
4. CHECK working_hours <br>
4.1 IF working_hours >= 40, bouns = (working_hours - 40) * bouns_rate <br>
4.2 IF working_hours >= 40, bouns = 0 <br>
5. CALCULATE gross_salary as "basic_salary + bouns" <br>
6. CALCULATE pension as "basic_salary * pension_rate" <br>
7. CALCULATE income_tax as "(gross_salary / basic_salary) * income_tax_rate" <br>
8. CALCULATE net_salary as "gross_salary - (pension + income_tax)" <br>
9. PRINT net_salary <br>
10. END
