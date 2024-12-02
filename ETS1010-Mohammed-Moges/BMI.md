
1.Make a program that calculates the body mass index (BMI) of a person and determine weather the person is in normal weight, under weight or over weight.
BMI is calculated as (BMI = weight/(height*height)).Make the program to work for multiple person before terminated.

## ***SOLUTION***

### *Problem analysis*

 **Input**   => weihgt in kilogram(kg), height in meter(m).
 
 **Output**  => Body Mass Index (BMI)in kg/m^2. 
 
 **Process** => BMI = weight / (height * height).
 

### *Psuedocode*
Step 1: start

Step 2: read weight in kg
          
- 2.1: if weight is less than or equal to 0, or other inapproapriate input go to Step 3
               
- 2.2: else go to step 4
        
Step 3: print "invalid input"

Step 4: read height in m		
         
- 4.1: if height less than or equal to 0, or other inapproapriate input go to Step 3
              
- 4.2: else go to Step 5
              
Step 5: calculate BMI as BMI = weight / (height * height)	
         
Step 6: print BMI
          
- 6.1: if BMI is less than 18.5 and greater than 0 go to Step 7 and break
                
- 6.2: if BMI is greater than or equal to 25 go to step 8 and break
                
- 6.3: else go to Step 9
                
Step 7: print " under weight "
          
Step 8: print " over weight "	
          
Step 9: print " normal weight " 
         
Step 10: stop
### *FLOW CHART*
``` mermaid
flowchart TD
    A([start]) --> B[Read weight in kg]
    B --> C{is weight invalid input?}
    C -->|Yes| D{is trial of weight > 0 ?}
    D -->|Yes| B
    D -->|No| N
    C -->|No| E[/Read height in m/]
    E --> F{is height invalid input?}
    F -->|Yes| G{Is trial of height > 0 ?}
    G -->|Yes| E
    G -->|NO| N
    F -->|No| P[BMI = weight /height^2]
    P --> H[/ Print BMI/]
    H --> I{Is 0 < BMI < 18.5 ?}
    I -->|Yes| J[/ Print "Under weight"/]
    I -->|No| K{Is 18.5 <= BMI < 25 ?}
    K -->|Yes| L[/Print "Normal weight"/]
    K -->|No| M[/Print "Over weight"/]
    L --> N([End])
    J --> N
    M --> N
```
