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

[![](https://mermaid.ink/img/pako:eNqVlE1z2jAQhv_KVqckNUPPTD-miUlCZ5pD20uxGc8WL-CJLXkkOcQD_PcIfWAbcqkvltbPvnqlXWvHliInNmGrUmyXG5Qa_sQpB_N8v0qUNoHFNYxGX-E2iWlZoiTYEj2XbbYV8rng62wjI_gneKMyiZrcFBVlCg3dRkBVXYqWKONYUQRrKYQ6feSkT2MnUmNbEdcR1MRVIXgEGl_9rOZ2DRuyo4WzemsdzpPxL8J8uODYI3OL3HnkYgsBu7NYvJupSwY-wycQEgr-gmWRm3fdaPh2cJnxMXP_l9R-moxnfeRDEJ9a8R89HvZPYg_33tXgFEPSveXgYVeoIfC-He_mwakf7cC0J2TXe0wGRw1f3tnrzXlNnUi_eiZvqPNxUHiXEMp4hLuPRt7HfUE9bOp6AYZaB6hrGYMaP-rkZxRERybHH9-jPYhZMj5rw_9r4s7DwPZZx_bNdP1r27czHeo6c81wlRDPF9cuxiJWkaywyM0fuTvGUqY3VFHKJmaY0wqbUqcs5QeDYqPF75Yv2UTLhiImRbPesMkKS2VmTZ0bi3GBa4lVQGrkcyGqE0R5oYX86a4AexMc3gCpq2Dp?type=png)](https://mermaid.live/edit#pako:eNqVlE1z2jAQhv_KVqckNUPPTD-miUlCZ5pD20uxGc8WL-CJLXkkOcQD_PcIfWAbcqkvltbPvnqlXWvHliInNmGrUmyXG5Qa_sQpB_N8v0qUNoHFNYxGX-E2iWlZoiTYEj2XbbYV8rng62wjI_gneKMyiZrcFBVlCg3dRkBVXYqWKONYUQRrKYQ6feSkT2MnUmNbEdcR1MRVIXgEGl_9rOZ2DRuyo4WzemsdzpPxL8J8uODYI3OL3HnkYgsBu7NYvJupSwY-wycQEgr-gmWRm3fdaPh2cJnxMXP_l9R-moxnfeRDEJ9a8R89HvZPYg_33tXgFEPSveXgYVeoIfC-He_mwakf7cC0J2TXe0wGRw1f3tnrzXlNnUi_eiZvqPNxUHiXEMp4hLuPRt7HfUE9bOp6AYZaB6hrGYMaP-rkZxRERybHH9-jPYhZMj5rw_9r4s7DwPZZx_bNdP1r27czHeo6c81wlRDPF9cuxiJWkaywyM0fuTvGUqY3VFHKJmaY0wqbUqcs5QeDYqPF75Yv2UTLhiImRbPesMkKS2VmTZ0bi3GBa4lVQGrkcyGqE0R5oYX86a4AexMc3gCpq2Dp)

