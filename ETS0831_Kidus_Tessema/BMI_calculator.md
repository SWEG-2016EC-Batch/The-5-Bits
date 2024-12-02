<h2>BMI Calculator</h2>
<h3>Problem</h3>
Make a program that calculates the Body Mass Index (BMI) of a person and determine weather the person is
in normal weight, under weight or over weight. BMI is calculated as (BMI = w/h*h). Make the program to
work for multiple person before terminated.

<h3>Problem Analysis</h3>
<strong>Input</strong> - Weight, Height <br>
<strong>Output</strong> - BMI of a person<br>
<strong>Process</strong> - <br>
Accepting weight and height <br>
Calculating BMI as (weight / (height * height))

<h3>Pseudocode</h3>
1. Start <br>
2. Accept Weight and Height <br>
3. calculate BMI as "Weight / (Height * Height) <br>
4. Check BMI <br>
<ol>
      <li>If BMI < 18.5, go to step 5</li>
      <li>If BMI >= 18.5 and BMI < 25, go to step 6</li>
      <li>If BMI >= 25, go to step 7</li>
    </ol>
5. Print "You are under-weight" <br>
6. Print "You are normal-weight" <br>
7. Print "You are over-weight" <br>
8. Print "If you like to continue, press 'y' and if you like to stop press 'n'" <br>
9. Check user input <br>
    9.1 If user input = y, go to step 1 <br>
    9.2 If user input = n, go to step 10 <br>
10. End <br>




```mermaid
flowchart TD

    A([Start])


```
