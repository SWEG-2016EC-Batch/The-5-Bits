3.Write a code program that find the result of x^y .Where the value of x and y are entered by the user.

## ***SOLUTION***

### **Problem analysis**

**Input** = base,exponent 

**Output** = the result of base raise exponent 

**Process** = base^exponent

### **Psuedocode**

Step 1: start

Step 2: declare and initialize  result = 1

Step 3: read base 

Step 4: read exponent

- 4.1 if both base and exponent are 0 go to Step 5
  
- 4.2 if the base is negative and the exponent is fraction go to Step 6
- 4.3 if either base or exponent are inapproapriate input go to Step 7
- 4.4 else go to Step 8
  
Step 5:print "undefined!" and exit

Step 6:Print "It's an imaginary number and it doesn't work under real number" and exit

Step 7: Print "Error" andd exit

Step 8:execute result =  pow(base,exponent)
  
Step 9:print result 

Step 10:end 

### **FLOW CHART**
``` mermaid
flowchart TD
    A([start]) --> B[Declare and initialize result = 1]
    B --> C[/Read base and exponent/]
    C --> D{Are both base and exponent 0 ?}
    D -->|Yes|E[/Print "Undefined!"/]
    E --> L
    D --> |No| F{Is the base negative and the exponent fraction ?}
    F --> |Yes| G[/Print "It's an imaginary number and it doesn't work under real number"/]
    G --> L
    F -->|No| H{Is either of the base or the exponent or both invalid input ?}
    H -->|yes| I[/Print "Error!"/]
    I --> L
    H -->|No| J[result = base^exponent]
    J --> K[/Print result/]
    K --> L([end])
```
