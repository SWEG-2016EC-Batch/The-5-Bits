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

**Problem Analysis**:  
*Input*: basic_salary (float), worked_hours (float), bonus_rate (float)  
*Output*: net_salary (float), gross_salary (float), bonus(float), pension (flaot), tax (float)  
*Process*:
- input basic_salary and worked_hours
- if worked_hours > 40, input bonus_rate and calculate bonus as bonus_rate * (worked_hours - 40)
- else if worked_hours <= 40 set bonus to 0
- calculate gross_salary as basic_salary + bonus
- calculate pension as basic_salary * 0.07
- if gross_salary > 3500, calculate tax as gross_salary * 0.3
- else if gross_salary > 2000, calculate tax as gross_salary * 0.25
- else if gross_salary > 1200, calculate tax as gross_salary * 0.2
- else if gross_salary > 600, calculate tax as gross_salary * 0.15
- else if gross_salary > 200, calculate tax as gross_salary * 0.1
- else if gross_salary <= 200, set tax to 0
- calculate net_salary as gross_salary - pension - tax
- print net_salary, gross_salary, bonus, pension and tax

**Flowchart**:
```mermaid
flowchart TD
  start([start]) --> input[/input basic_salary and worked_hours/]
  input --> decision{is worked_hours > 40}
  decision -- yes --> input0[/input bonus_rate/]
  input0 --> calculate["bonus = bonus_rate * (working_hours - 40)"]
  decision -- no --> set["bonus = 0"]
  calculate --> calculate0["gross_salary = basic_salary + bonus"]
  set --> calculate0
  calculate0 --> calculate1["pension = basic_salary * 0.07"]
  calculate1 --> decision0{is gross_salary > 3500?}
  decision0 -- yes --> tax0["tax = gross_salary * 0.3"]
  tax0 --> calculate2
  decision0 -- no --> decision1{is gross_salary > 2000?}
  decision1 -- yes --> tax1["tax = gross_salary * 0.25"]
  tax1 --> calculate2
  decision1 -- no --> decision2{is gross_salary > 1200?}
  decision2 -- yes --> tax2["tax = gross_salary * 0.2"]
  tax2 --> calculate2
  decision2 -- no --> decision3{is gross_salary > 600?}
  decision3 -- yes --> tax3["tax = gross_salary * 0.15"]
  tax3 --> calculate2
  decision3 -- no --> decision4{is gross_salary > 200?}
  decision4 -- yes --> tax4["tax = gross_salary * 0.1"]
  tax4 --> calculate2
  decision4 -- no --> tax5["tax = 0"]
  tax5 --> calculate2["net_salary = gross_salary - pension - tax"]
  calculate2 --> print[/print net_salary, gross_salary, bonus, pension and tax/]
  print --> stop([stop])
```
