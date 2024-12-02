3.Design an algorithm and write a program to read an employee's name, weekly working hours, bonus rate per hour and base salary and find the employees gross 
salary, net salary and bonus payment. Hint(Pension rate-5%, tax rate-15%).

## ***SOLUTION*** 

### **Problem analysis**

**Input** = employee name , weekly working hours, bonus rate per hour, base salary

**Output** = employee's name, gross salary, net salary and bonus payment

**Process** = declaration of variables, calculations that are;

- bonus payment as bonus payment = weekly working hour * bonus rate per hour
  
- gross salary as gross salary = base salary + bonus payment
  
- pension as pension = base salary * pension rate
  
- tax as tax = base salary * tax rate
  
- net salary as net salary = gross salary - pension - tax

### **PSUEDOCODE**

Step 1: start

Step 2:declare variables as weekly_working_hr,bonus_rate_hr,base_salary,employee_name,gross_salary,net_salary,bonus_payment,pension,tax,pension_rate,tax_rate

Step 3: read employee's name

Step 4: read weekly working hour 

- 4.1: if weekly working hour < 0  go to Step 5
  
- 4.2: else go to Step 6
  
Step 5: print "Invalid input" and exit

Step 6: read bonus rate per hour 

- 6.1: if bonus rate per hour < 0  or invalid input go to Step 5
  
- 6.2: else go to Step 7
  
Step 7: read base salary

- 7.1: if base salry < 0 or invalod input go to Step 5
  
- 7.2: else go to Step 8
  
Step 8:
- bonus payment = weekly working hour * bonus rate per hour

- gross salary = base salary + bonus payment
  
- pension = base salary * pension rate
  
- tax = base salary * tax rate
  
- net salary = gross salary - pension - tax
  
Step 9:print employee's name

Step 10:print weekly working hour

Step 11:print bonus rate per hour

Step 12:print base salary

Step 13:print bonus payment

Step 14:print gross salary

Step 15:print pension

Step 16:print tax

Step 17:print net salary

Step 18:end

### **FLOW CHART**

``` mermaid
flowchart TD
    A([start]) --> B[Declare weekly_working_hr, bonus_rate_hr, base_salary, employee_name, groos_salary, net_salary, bonus_payment, pension, tax, pensipn_rate, tax_rate]
    B --> Z[/Read employee_name/]
    Z --> C[/Read weekly_working_hr/]
    C --> D{Is weekly_working_hr < 0 or invalid input ?}
    D -->|Yes|E[/Print "Invalid input!"/]
    E --> J
    D --> |No| F[/Read bonus_rate_hr/]
    F -->  G{is bonus_rate_hr < 0 or other invalid input }
    G --> |Yes| E
    F -->|No| H[bonus_payment = weekly_working_hr * bonus_rate_hr, 
    groos_salary = bonus_payment + base_salary,
     pension = base_salary * pension_rate, 
     tax = base_salary * tax_rate, 
    net_salary = gross_salary - pension-tax]
    H --> I[/Print
employee_name, weekly_working_hr, bonus_rate_hr, base_salary,tax_rate, pension_rate,bonus_payment, gross_salary, pension,tax, net_salary/]
    I --> J([end])
    
```

