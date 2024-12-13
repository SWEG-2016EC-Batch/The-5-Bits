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

<h3>Pseudocode</h3>
1. Start <br>
2. Declare Variables <br>
number: integer to store the user input number <br>

num[10]: array to store various intermediate values for different operations <br>

choice: integer to store the user's choice of operation. <br>

reverse: integer to store the reversed number. <br>

digits: integer to count the number of digits in the number. <br>

product: integer to store the product of even digits. <br>

last, first: integers to store the first and last digits of the number. <br>

sum: integer to store the sum of the first and last digits. <br>

last_swap, first_swap: integers to store the swapped first and last digits. <br>

swap_in: integer to store the middle part of the number during the swap. <br>

power: integer to keep track of place value during the swap operation. <br>

reverse_pal: integer to store the reversed number for palindrome check. <br>

digit_freq[10]: array to store the frequency of each digit from 0 to 9. <br>

digit_num: integer to store the current digit for frequency calculation. <br>

digit_round: integer to iterate over digit frequencies for printing. <br>

factorial_num[20]: array to store the digits of the number for factorial calculation. <br>

place: integer to track the position of digits for factorial calculation. <br>

sum_factorial: integer to store the sum of factorials. <br>

num_factorial: integer to store the factorial of a digit. <br>

perfect: integer to store the sum of divisors for the perfect number check. <br>


3. Display Welcome and Instructions <br>
Print: "Welcome". <br>
Print: "Please enter your number". <br>
Input number. <br>
Display Operation Choices <br>

Print options: <br>
"If you want the reverse of the number, press 1". <br>
"If you want the number of digits in the given number, press 2". <br>
"If you want to find the product of even digits, press 3". <br>
"If you want to know the first and last digits and their sum, press 4". <br>
"If you want to swap the first and last digits, press 5". <br>
"If you want to check if the number is a palindrome, press 6". <br>
"If you want to find the frequency of each digit, press 7". <br>
"If you want to check if the number is a Strong number, press 8". <br>
"If you want to check if the number is a Perfect number, press 9". <br>
Input the Choice <br>

4.Input choice. <br>
Switch Based on User’s Choice <br>
 
5. Case 1: Reverse the number <br>

Set num[1] = number. <br>
While num[1] != 0: <br>
Extract the last digit: i = num[1] % 10. <br>
Update reverse = (reverse * 10) + i. <br>
Remove the last digit: num[1] /= 10. <br>
Print reverse. <br>

6. Case 2: Count the number of digits <br>
 
Set num[2] = number. <br>
While num[2] != 0: <br>
Remove the last digit: num[2] /= 10. <br>
Increment digits. <br>
Print digits. <br>

6. Case 3: Find the product of even digits <br>

Set num[3] = number. <br>
While num[3] != 0: <br>
Extract the last digit: j = num[3] % 10. <br>
If j % 2 == 0: <br>
Update product = product * j. <br>
Remove the last digit: num[3] /= 10. <br>
Print product. <br>

7. Case 4: Find the first and last digits and their sum <br>

Set num[4] = number. <br>
Extract the last digit: last = num[4] % 10. <br>
While num[4] != 0: <br>
Set first = num[4]. <br>
Remove the last digit: num[4] /= 10. <br>
Print "The first number is: ", first. <br>
Print "The last number is: ", last. <br>
Set sum = first + last. <br>
Print sum. <br>

8. Case 5: Swap the first and last digits <br>

Set num[5] = number. <br>
Extract the last digit: last_swap = num[5] % 10. <br>
Remove the last digit: num[5] /= 10. <br>
While num[5] != 0: <br>
Extract the current digit: i = num[5] % 10. <br>
Update swap_in = swap_in + (i * power). <br>
Update power = power * 10. <br>
Remove the last digit: num[5] /= 10. <br>
If num[5] < 10, break out of the loop. <br>
Update power = power * 10. <br> 
Set first_swap = number / power. <br> 
Update last_swap = last_swap * power.<br>
Set last_swap = last_swap + ((swap_in * 10) + first_swap). <br>
Print last_swap.<br>

9. Case 6: Check if the number is a palindrome<br>

Set num[6] = number.<br>
While num[6] != 0:<br>
Extract the last digit: i = num[6] % 10.<br>
Update reverse_pal = (reverse_pal * 10) + i.<br>
Remove the last digit: num[6] /= 10.<br>
If reverse_pal == number:<br>
Print "It is palindrome".<br>
Else:<br>
Print "It is not palindrome".<br>

10. Case 7: Find the frequency of each digit<br>

Set num[7] = number.<br>
While num[7] != 0:<br>
Extract the last digit: digit_num = num[7] % 10.<br>
Increment digit_freq[digit_num].<br>
Remove the last digit: num[7] /= 10.<br>
Print the table header: "The Digit Its Frequency".<br>
For digit_round from 0 to 9:<br>
If digit_freq[digit_round] > 0:<br>
Print " digit_round -------------- digit_freq[digit_round]".<br>

11. Case 8: Check if the number is a Strong number<br>

Set num[8] = number.<br>
While num[8] != 0:<br>
Extract the last digit: factorial_num[place] = num[8] % 10.<br>
Increment place.<br>
Remove the last digit: num[8] /= 10.<br>
While place >= 0:<br>
Set num_factorial = 1.<br>
For i from 1 to factorial_num[place]:<br>
Update num_factorial = num_factorial * i.<br>
Update sum_factorial = sum_factorial + num_factorial.<br>
Decrement place.<br>
If sum_factorial == number:<br>
Print "It is a strong number".<br>
Else:<br>
Print "It is not a strong number".<br>

12. Case 9: Check if the number is a Perfect number<br>

Set num[9] = number.<br>
For i from 1 to num[9] - 1:<br>
If num[9] % i == 0:<br>
Add i to perfect.<br>
If perfect == number:<br>
Print "It is a perfect number".<br>
Else:<br>
Print "It is not a perfect number".<br>

13. End<br>



