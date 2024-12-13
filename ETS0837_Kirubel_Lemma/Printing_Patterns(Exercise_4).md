> **Problem Description**:  
> (a) Write a program that generate each of the pattern on the right side. (Images provided with question)  
> (b) Update your program in (a) to allow user to input the dimension of the pattern.

**Problem Analysis**:  
*Input*: width (int), height (int)  
*Output*: pattern  
*Process*:  
- input width and height
- print filled square with numbers
- print filled square with letters
- print half pyramid with numbers
- print laterally inverted half pyramid with numbers
- print half pyramid with letters
- print filled square with letters
- print hollow square with asterisk
- print inverted half pyramid with asterisk
- print hollow inverted half pydramid with asterisk
- print full pyramid with asterisk
- print inverted full pyramid with asterisk
- print hollow full pyramid with asterisk

**Flowchart**:  
*Main Flowchart*:  
```mermaid
flowchart TD
  start([start]) --> input[/input width and height/]
  input --> process0[print filled square with numbers]
  process0 --> process1[print filled square with letters]
  process1 --> process2[print half pyramid with numbers]
  process2 --> process3[print laterally inverted half pyramid with numbers]
  process3 --> process4[print half pyramid with letters]
  process4 --> process5[print filled square with letters]
  process5 --> process6[print hollow square with asterisk]
  process6 --> process7[print inverted half pyramid with asterisk]
  process7 --> process8[print hollow inverted half pydramid with asterisk]
  process8 --> process9[print full pyramid with asterisk]
  process9 --> process10[print inverted full pyramid with asterisk]
  process10 --> process11[print hollow full pyramid with asterisk]
  process11 --> stop([stop])
```
