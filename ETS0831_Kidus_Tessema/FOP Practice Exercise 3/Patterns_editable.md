<h2>Number Checker With Menu</h2>
<h3>Problem</h3>
Write a program that accepts an integer from the user and perform the following. Once you complete solving all the exercises compile it and prepare a menu.

<h3>Problem Analysis</h3>
<strong>Input</strong> - <br>
number & choice <br>
<strong>Output</strong> - Number's character depending on character to check was chosen<br>
<strong>Process</strong> - <br>
Accepting inputs <br>
Checking value of choice to know what character is wanted to be checked <br>
Start
Declare Variables
row: integer to represent the current row.
column: integer to represent the current column.
character: char initialized to 'A', used for character patterns.
height: integer to store the height of the patterns.
width: integer to store the width of the patterns.
Display Welcome Message

Print: "Welcome".
Print: "Please enter the height".
Input height.
Print: "Please enter the width".
Input width.
Generate Patterns

Pattern 1 (Numbers in a grid)

Print "1st pattern".
For row from 1 to height:
For column from 1 to width:
Print the value of column followed by a space.
Print a newline after each row.
Pattern 2 (Alphabet in a grid)

Print "2nd pattern".
Set character = 'A'.
For row from 1 to height:
For column from 1 to width:
Print character followed by a space.
Increment character.
Print a newline after each row.
Pattern 3 (Increasing numbers by row)

Print "3rd pattern".
For row from 1 to height:
For column from 1 to row:
Print column followed by a space.
Print a newline after each row.
Pattern 4 (Descending numbers in reverse)

Print "4th pattern".
For row from 1 to height:
For column from 1 to height - row:
Print two spaces for indentation.
For i from row to 1:
Print i followed by a space.
Print a newline after each row.
Pattern 5 (Alphabet in a triangular pattern, reset after each row)

Print "5th pattern".
Set character = 'A'.
For row from 1 to height:
For column from 1 to row:
Print character followed by a space.
Increment character.
Reset character = 'A' after each row.
Print a newline after each row.
Pattern 6 (Cyclic lowercase alphabets)

Print "6th pattern".
Set character = 'a'.
For row from 1 to height:
For column from 1 to width:
Print character followed by a space.
Increment character.
If character > 'e', reset character = 'a'.
Print a newline after each row.
Pattern 7 (Hollow rectangle with stars on the border)

Print "7th pattern".
For row from 1 to height:
For column from 1 to width:
If row == 1 or row == height, print "* ".
Else if column == 1 or column == width, print "* ".
Otherwise, print spaces for inner hollow part.
Print a newline after each row.
Pattern 8 (Inverted triangle of stars)

Print "8th pattern".
For row from height down to 1:
For column from 1 to row:
Print "* ".
Print a newline after each row.
Pattern 9 (Inverted hollow triangle of stars)

Print "9th pattern".
For row from height down to 1:
For column from 1 to row:
If column == 1 or column == row, print "* ".
Else if row == height, print "* ".
Otherwise, print spaces for the hollow part.
Print a newline after each row.
Pattern 10 (Pyramid with alternating stars and spaces)

Print "10th pattern".
For row from 1 to height:
For column from 1 to height - row:
Print two spaces for indentation.
For i from 1 to (row * 2 - 1):
If i is odd, print "* ".
Otherwise, print spaces.
Print a newline after each row.
Pattern 11 (Inverted pyramid with alternating stars and spaces)

Print "11th pattern".
For row from height down to 1:
For column from 1 to height - row:
Print two spaces for indentation.
For i from 1 to (row * 2 - 1):
If i is odd, print "* ".
Otherwise, print spaces.
Print a newline after each row.
Pattern 12 (Inverted pyramid with stars only at the borders)

Print "12th pattern".
For row from 1 to height:
For column from 1 to height - row:
Print two spaces for indentation.
For i from 1 to (row * 2 - 1):
If i == 1 or i == (row * 2 - 1), print "* ".
Else if row == height, print "* ".
Otherwise, print spaces for inner part.
Print a newline after each row.
End
