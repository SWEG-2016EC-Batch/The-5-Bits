### Problem
Design an algorithm and write a to read an employee name weekly working hours, bonus rate per hour and
base salary and find the employees gross-salary, net salary and bonus payment. (Hint: pension rate – 5%,
tax: 15%).

### Problem analysis
**Input** - employee's name, weekly working hours, bonus rate per hour and
base salary <br>
**Output** - employee's gross-salary, net salary and bonus payment <br>
**Process** - <br>
Accepting input employee's name, weekly working hours, bonus rate per hour and
base salary <br>
Calculating bonus payment as weekly working hours * bonus rate per hour <br>
Calculating employee's gross-salary as base salary + bonus payment <br>
Calculating employee's net salary as employee's gross-salary - (employee's gross-salary *(pension (5%) + tax (15%) )) <br>

### Pseduocode
1. Start
2. Pension = 0.05, tax = 0.15
3. Accept name_e (String), hours_per_week, bonus_rate, base, bonus_payment, gross, net (double)
4. Calculate bonus_payment = hours_per_week * bonus_rate
5. Calculate gross = base + bonus_payment
6. Calculate net = gross - (gross * (pension + tax))
7. Print bonus_payment, gross, net
8. Stop