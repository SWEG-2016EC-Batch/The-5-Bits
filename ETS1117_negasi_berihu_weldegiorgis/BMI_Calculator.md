# problem Analysis
   ###   Input
-   Weight in kilograms : Floating-point value.
-   Height in meters : Floating-point value.
-   Termination condition: User enters `0` for weight.
### Output
-   Numerical BMI value (float\text{float}float).
-   Descriptive weight status:
    -   "Underweight"
    -   "Normal weight"
    -   "Overweight"
-   A termination message when the program stops. 
### Operation
1. Input Validation:
         * Ensure weight is greater than or equal to zero (`w >= 0`).
        *   Ensure height is strictly greater than zero (`h > 0`).
2. BMI Calculation**:
    
   * Apply the formula: BMI=weight/(height*height).​
3. Status Classification**:
    
     *  If BMI < 18.5, classify as "Underweight".
     *  If 18.5≤BMI≤24.9, classify as "Normal weight".
   * If BMI > 24.9, classify as "Overweight".
4. Multiple Person Handling:
    
    -   Use a loop to allow multiple calculations.
    -   Exit the loop if the user inputs `0` for weight.
#  Short Pseudocode for the BMI Calculator


### 1. Start

### 2.   Prompt the user to enter the weight in kg or '0' to stop.

### 3. Read   weight' and check if  `weight == 0`:
  3.1 if true exit the code.
  3.2  if false continue to 4.
  ### 4. again check If `weight < 0`:
       4.1 Display: "Weight must be greater than zero. Try again."
       4.2 Continue the  loop.
  ###  5. Prompt the user to Enter the height in meters and read the  `height`.
   ### 6.  check  If `height <= 0`:
       6.1  Display: "Height must be greater than zero. Try again."
        6.2  Continue loop.
   ### 7.  Compute `BMI = weight / (height * height)`.
  ###   8.   Display the calculated BMI.
         8.1 If  `BMI < 18.5`  Display  "Status: Underweight".
         8.2 Else If `18.5 ≤ BMI ≤ 24.9` Display "Status: Normal weight".
         8.3 Otherwise  Display "Status: Overweight".
### 9. End Loop
### 10. Stop

# Flow Chart

```mermaid
flowchart TD
    A([Start]) --> B[/Read weight/]
    B --> C{Weight = 0?}
    C -->|Yes| D[stop]
    C -->|No| E{Weight < 0?}
    E -->|Yes| F[/"Weight must be greater than zero. Try again."/]
    F --> B
    E -->|No| G[/promt the user to enter height in meters/]
    G --> H[/Read height/]
    H --> I{Height <= 0?}
    I -->|Yes| J[/"Height must be greater than zero. Try again."/]
    J --> G
    I -->|No| K[BMI = weight /height * height]
    K --> L[/calculated BMI/]
    L --> M{BMI < 18.5?}
    M -->|Yes| N[/"Status: Underweight"/]
    M -->|No| O{18.5 ≤ BMI ≤ 24.9?}
    O -->|Yes| P[/"Status: Normal weight"/]
    O -->|No| Q[/"Status: Overweight"/]
    N --> R[continue the Loop]
    P --> R
    Q --> R
    R --> B
   



