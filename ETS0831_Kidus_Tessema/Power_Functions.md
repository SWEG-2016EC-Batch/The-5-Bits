### Problem
Write a program that find the result of the expression x<sup>y</sup> where the value of X and Y are entered by the user.

### Problem analysis
**Input** - x, y <br>
**Output** - result <br>
**Process** - <br>
Accepting input x,y <br>
Calculating result as x<sup>y</sup> <br>

### Pseduocode
1. Start
2. Accept x,y
3. Check x = 0 & y = 0
    <ol>
      <li>If True, go to step 4</li>
      <li>If False, go to step 5</li>
    </ol>
4. Print "Invalid"
5. Calculate result = x<sup>y</sup>
6. Print result
7. Stop

### Flowchart

```mermaid
flowchart TD
id1([Start])
id1 ==> id2[/x,y/]
id2 ==> id3{x == 0 & y == 0}
id3 == True ==> id4a[/Print "Undefined"/]
id3 == False ==> id4b["Result = x^y"]
id4b ==> id5[/Print result/]
id5 & id4a ==> id6([Stop])
```
