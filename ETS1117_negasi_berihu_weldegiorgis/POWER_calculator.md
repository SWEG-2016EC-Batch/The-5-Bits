# Problem Statement: 

Write a program that find the result of the expression x^y where the value of X and Y are entered by the user.
##  A) Problem Analysis:
###  1. Inputs:
  - Accept the base x and the exponent y.
### 2. Output:
- Display Compute x^y.

### 3. Process:
  - Prompting the user to input x and y.
- Validating the inputs against the mentioned conditions.
   * Both 𝑥 and 𝑦 cannot be 0 simultaneously.
   * x<0 with 0<𝑦<1 because 0<y<1 is invalid since it involves computing fractional powers of negative numbers, which is undefined for real numbers.
  * if inputs are valid.Display an error message for invalid inputs.
 - calculating  x^y and displaying it.
### B)  pseudocode
1. Start
2. Prompt the user to input x and 𝑦 and accept x and y.
3. . Check for invalid input conditions:
 3.1  If 𝑥=0  and 𝑦 = 0:
 3.2 Print "Invalid input: Both x and y cannot be zero simultaneously." goto 5.
 3.3 If 𝑥<0  and 0<𝑦<1 :
 3.4 Print "Invalid input: Fractional powers of negative bases are not allowed."
 3.5 Exit the program.
4. Compute  result = 𝑥^𝑦 using the pow() function.
5. Dieplay result.
6. end.

## C) flow chart

