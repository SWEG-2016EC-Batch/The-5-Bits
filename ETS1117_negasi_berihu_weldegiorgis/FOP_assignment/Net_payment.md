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

1. **Start**

3. **Initialize** `pension` to 0.07
4. **Prompt the user** to enter the `basic_salary` and  **Read** `basic_salary`
6. **Set** `gross_salary` to `basic_salary`
7. **Calculate** `pension_deduction` as `basic_salary * pension`
8. **Prompt the user** to enter the `bonus_rate` and  **Read** `bonus_rate`
10. **Prompt the user** to enter the `worked_hours` and  **Read** `worked_hours`
12. **If** `worked_hours > 40`:
    1. **Prompt the user** to enter the `overtime_bonus_rate` and  **Read** `overtime_bonus_rate`
    3. **Calculate** `extra_hours` as `worked_hours - 40`
    4. **Add** `overtime_bonus_rate * extra_hours` to `gross_salary`
13. **Add** `basic_salary * bonus_rate` to `gross_salary`
14. **Determine** `tax_rate` based on `gross_salary`:
    - If `gross_salary <= 200`: `tax_rate` = 0
    - Else if `gross_salary <= 600`: `tax_rate` = 0.1
    - Else if `gross_salary <= 1200`: `tax_rate` = 0.15
    - Else if `gross_salary <= 2000`: `tax_rate` = 0.2
    - Else if `gross_salary <= 3500`: `tax_rate` = 0.25
    - Else: `tax_rate` = 0.3
15. **Calculate** `tax_deduction` as `gross_salary * tax_rate`
16. **Calculate** `net_pay` as `gross_salary - tax_deduction - pension_deduction`
17. **Display** the `gross_salary`, `pension_deduction`, `tax_deduction`, and `net_pay`
18. **End**
## flow chart
``` mermaid
graph TD
    A([Start]) --> B[pension = 0.07]
    B --> C[/ basic salary/]
    C --> D[ gross_salary = basic salary]
    D --> E[ pension_deduction = basic salary * pension]
    E --> F[/ bonus_rate/]
    F --> G[/ worked_hours/]
    G --> H{If worked_hours > 40?}
    H -- Yes --> I[/ overtime_bonus_rate/]
    I --> J[ extra_hours = worked_hours - 40]
    J --> K[Add overtime_bonus_rate * extra_hours to gross_salary]
    H -- No --> L[ add basic salary * bonus_rate to gross_salary]
    K --> L
    L --> M{Determine tax_rate based on gross_salary}
    M --> N{gross_salary <= 200?}
    N -- Yes --> O[tax_rate = 0]
    N -- No --> P{gross_salary <= 600?}
    P -- Yes --> Q[tax_rate = 0.1]
    P -- No --> R{gross_salary <= 1200?}
    R -- Yes --> S[tax_rate = 0.15]
    R -- No --> T{gross_salary <= 2000?}
    T -- Yes --> U[tax_rate = 0.2]
    T -- No --> V{gross_salary <= 3500?}
    V -- Yes --> W[tax_rate = 0.25]
    V -- No --> X[tax_rate = 0.3]
    O --> Y[ tax_deduction = gross_salary * tax_rate]
    Q --> Y
    S --> Y
    U --> Y
    W --> Y
    X --> Y
    Y --> Z[ net_pay = gross_salary - tax_deduction - pension_deduction]
    Z --> AA[/ the gross_salary, pension_deduction, tax_deduction, and net_pay/]
    AA --> AB([End])





