<h2>Pattern generator</h2>
<h3>Problem Analysis</h3>
<strong>Input</strong> - <br>
hieght & width <br>
<strong>Output</strong> - pattern in that dimension<br>
<strong>Process</strong> - <br>
Accepting inputs <br>
printing patterns by the given dimensions<br>
<h3>Pseudocode</h3>
1. Start <br>
2. Declare Variables <br>

row: integer to represent the current row. <br>

column: integer to represent the current column. <br>

character: char initialized to 'A', used for character patterns. <br>

height: integer to store the height of the patterns. <br>

width: integer to store the width of the patterns. <br>

3. Display Welcome Message <br>
Print: "Welcome". <br>
Print: "Please enter the height". <br>
Input height. <br>
Print: "Please enter the width". <br>
Input width. <br>
Generate Patterns <br>

4. Pattern 1 (Numbers in a grid) <br>

Print "1st pattern". <br>
For row from 1 to height: <br>
For column from 1 to width: <br>
Print the value of column followed by a space. <br>
Print a newline after each row. <br>
Pattern 2 (Alphabet in a grid) <br>

5. Print "2nd pattern". <br>
Set character = 'A'. <br>
For row from 1 to height: <br>
For column from 1 to width: <br>
Print character followed by a space. <br>
Increment character. <br>
Print a newline after each row. <br>
Pattern 3 (Increasing numbers by row) <br>

6. Print "3rd pattern". <br>
For row from 1 to height: <br>
For column from 1 to row: <br>
Print column followed by a space. <br>
Print a newline after each row. <br>
Pattern 4 (Descending numbers in reverse) <br>

7. Print "4th pattern". <br>
For row from 1 to height: <br>
For column from 1 to height - row: <br>
Print two spaces for indentation. <br>
For i from row to 1: <br>
Print i followed by a space. <br>
Print a newline after each row. <br>
Pattern 5 (Alphabet in a triangular pattern, reset after each row) <br>

8. Print "5th pattern". <br>
Set character = 'A'. <br>
For row from 1 to height: <br>
For column from 1 to row: <br>
Print character followed by a space. <br>
Increment character. <br>
Reset character = 'A' after each row. <br>
Print a newline after each row. <br>
Pattern 6 (Cyclic lowercase alphabets) <br>

9. Print "6th pattern". <br>
Set character = 'a'. <br>
For row from 1 to height: <br>
For column from 1 to width: <br>
Print character followed by a space. <br>
Increment character. <br>
If character > 'e', reset character = 'a'. <br>
Print a newline after each row. <br>
Pattern 7 (Hollow rectangle with stars on the border) <br>

10.Print "7th pattern". <br>
For row from 1 to height: <br>
For column from 1 to width: <br>
If row == 1 or row == height, print "* ". <br>
Else if column == 1 or column == width, print "* ". <br>
Otherwise, print spaces for inner hollow part. <br>
Print a newline after each row. <br>
Pattern 8 (Inverted triangle of stars) <br>

11. Print "8th pattern". <br>
For row from height down to 1: <br>
For column from 1 to row: <br>
Print "* ". <br>
Print a newline after each row. <br>
Pattern 9 (Inverted hollow triangle of stars) <br>

12. Print "9th pattern". <br>
For row from height down to 1: <br>
For column from 1 to row: <br>
If column == 1 or column == row, print "* ". <br>
Else if row == height, print "* ". <br>
Otherwise, print spaces for the hollow part. <br>
Print a newline after each row. <br>
Pattern 10 (Pyramid with alternating stars and spaces) <br>

13. Print "10th pattern". <br>
For row from 1 to height: <br>
For column from 1 to height - row: <br>
Print two spaces for indentation. <br>
For i from 1 to (row * 2 - 1): <br>
If i is odd, print "* ". <br>
Otherwise, print spaces. <br>
Print a newline after each row. <br>
Pattern 11 (Inverted pyramid with alternating stars and spaces) <br>

14. Print "11th pattern". <br>
For row from height down to 1: <br>
For column from 1 to height - row: <br>
Print two spaces for indentation. <br>
For i from 1 to (row * 2 - 1): <br>
If i is odd, print "* ". <br>
Otherwise, print spaces. <br>
Print a newline after each row. <br>
Pattern 12 (Inverted pyramid with stars only at the borders) <br>

15. Print "12th pattern". <br>
For row from 1 to height: <br>
For column from 1 to height - row: <br>
Print two spaces for indentation. <br>
For i from 1 to (row * 2 - 1): <br>
If i == 1 or i == (row * 2 - 1), print "* ". <br>
Else if row == height, print "* ". <br>
Otherwise, print spaces for inner part. <br>
Print a newline after each row. <br>

16. End <br>
