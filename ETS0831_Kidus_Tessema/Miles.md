### Problem
Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallons
the automobiles can be driven. The program outputs the number miles the automobile cam be driven
without refueling.

### Problem analysis
**Input** - fuel avaliable in gallon, miles per gallon of the automobile <br>
**Output** - The miles a person can go <br>
**Process** - <br>
Accepting input fuel avaliable in gallon, miles per gallon of the automobile <br>
Calculating the miles a person can go as miles per gallon of the automobile * fuel avaliable in gallon <br>

### Pseduocode
1. Start <br>
2. Accept fuel avaliable in gallon, miles per gallon of the automobile <br>
3. Calculate The miles a person can go as "miles per gallon of the automobile * fuel avaliable in gallon" <br>
4. Print The miles a person can go <br>
5. End

### Flowchart

```mermaid
flowchart TD
id1([Start])
id1 ==> id2[/gallon, milepergallon/]
id2 ==> id3["mile = milepergallon * gallon"]
id3 ==> id4[/ print mile/]
id4 ==> id5([Stop])

