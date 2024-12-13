## **Problem description**

Develop a program that find the Net-Pay of an employee after deduction of pension (7%) and tax based on tax rate provided.
The program should read the basic salary, worked hours, and bonus rate. If the employee worked hours exceed 40 hrs., the program
prompts the user to enter an over-time bonus rate/hour.

## **problem analysis**

**Input** = base salary, bonus rate, worked hour, over time rate 

**Output** = base salary, bonus payment, overtime payment, gross salary , pension, tax, net salary

**Process** = calculate 
               > bonus payment = worked hour * bonus rate

               > overtime payment = worked hour * overtime rate

              > gross salary = base salary + bonus payment + over time payment

              > pension = gross salary * 0.07

              > tax = gross salary * tax rate

              > net salary = gross salary - pension - tax
            

## ***FLOW CHART***

```mermaid
flowchart TD
    A([start]) --> B[/Read basic salary,Bonus rate  and worked hour/]
    B --> C{Is worked hour exceeds 40 hour?}
    C --> |NO| D[Overtime rate = 0 ]
    C --> |YES| E[/Read overtime rate/]
    E --> F[difference of hour = worked hour - 40,
    Overtime payment = Difference of hour * overtime rate,
    Bonus payment = Worked hour * bonus rate,
    Gross salary = Basic salary + Overtime payment + Bonus payment,
    pension = Basic salary * 0.07]
    D --> F
    F --> G{Is Gross salary less <= 200 ?}
    G --> |NO| H{Is gross salary > 200 and <= 600 ?}
    G --> |YES| I[tax rate = 0]
    I --> R
    H --> |YES| J[tax rate = 0.1]
    J --> R
    H --> |NO| K{Is gross salary > 600 and <= 1200 ?}
    K --> |YES| L[tax rate = 0.15]
    L --> R
    K --> |NO| M{Is gross salary > 1200 and <= 2000 ?}
    M --> |YES| N[tax rate = 0.2]
    N --> R
    M --> |NO| O{Is gross salary > 2000 and <= 3500 ?}
    O --> |YES| P[tax rate = 0.25]
    P --> R
    O --> |NO| Q[tax rate = 0.3]
    Q --> R[Tax = gross salary * tax rate]
    R --> S[Net salary = gross salary  - Pension - Tax]
    S --> T[/print
    Basic salary,Over time, Bonus, Pension, Tax and Net salary/]
    T --> U([End])



```


