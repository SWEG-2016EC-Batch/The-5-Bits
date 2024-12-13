1. Start Program
2. Loop through each pattern section

    a) **Pattern 1: 5x5 Number Grid**
       - For i = 1 to 5
           - For j = 1 to 5
               - Print number j
           - Move to next line
    
    b) **Pattern 2: Alphabet Grid 'A' to 'X'**
       - Initialize `alpha = 'A'`
       - For i = 1 to 4
           - For j = 1 to 6
               - Print current `alpha`
               - Increment `alpha`
               - Break if `alpha > 'X'`
           - Move to next line
    
    c) **Pattern 3: Increasing Number Sequence**
       - For i = 1 to 5
           - For j = 1 to i
               - Print number j
           - Move to next line
    
    d) **Pattern 4b_1: Inverted Pyramid with Numbers**
       - For i = 1 to 5
           - Print spaces for j = i to 5
           - Print decreasing numbers from i to 1
           - Move to next line
    
    e) **Pattern 4b_2: Alphabet Triangle 'A' to 'E'**
       - For i = 'A' to 'E'
           - For j = 'A' to i
               - Print current letter
           - Move to next line
    
    f) **Pattern 4b_3: Lowercase Alphabet Grid**
       - For i = 'a' to 'e'
           - For j = 'a' to 'e'
               - Print current letter
           - Move to next line
    
    g) **Pattern 5: Hollow Square**
       - For i = 1 to 7
           - For j = 1 to 8
               - If i is 1, 7 or j is 1, 8, print "*"
               - Else print spaces
           - Move to next line
    
    h) **Pattern 6: Inverted Half Pyramid**
       - For i = 1 to 6
           - For j = i to 6
               - Print "*"
           - Move to next line
    
    i) **Pattern 7: Hollow Inverted Half Pyramid**
       - For i = 1 to 6
           - For j = i to 6
               - If i == 1, j == i, j == 1, j == 6, print "*"
               - Else print space
           - Move to next line
    
    j) **Pattern 8: Full Pyramid**
       - For i = 1 to 6
           - Print spaces for j = i to 6
           - Print stars in increasing order
           - Move to next line
    
    k) **Pattern 9: Inverted Full Pyramid**
       - For i = 1 to 6
           - Print spaces for j = 1 to i
           - Print stars in decreasing order from i to 6
           - Move to next line
    
    l) **Pattern 10: Hollow Full Pyramid**
       - For i = 1 to 6
           - Print spaces for j = i to 6
           - For j = 1 to i
               - If i == 1, i == 6, j == 1, j == i, print "*"
               - Else print space
           - Move to next line

3. End Program
