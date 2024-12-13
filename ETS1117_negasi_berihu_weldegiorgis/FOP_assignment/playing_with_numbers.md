



# Pseudocode for Number Operations Program

## 1. Start the program
- Display a menu of operations for the user to choose from.
- Accept user input for the choice.

## 2. Loop through the menu until the user chooses to exit
- **While loop**: Continue until the user selects "Exit" option (choice == 10).

### 3. Input the number
- Ask the user to input an integer (`number`).
- Initialize necessary variables:
  - `reverse = 0` (for reversing the number),
  - `product = 1` (for product of even digits),
  - `i = 0` (digit count),
  - `digitFrequency[10] = {0}` (array to count digit frequency),
  - `sum = 0` (for sum of factorials),
  - `firstnumber, lastDigit` (first and last digits),
  - `originalNumber = number` (store the original number).

### 4. Perform the chosen operation based on the user input

#### Case 1: Reverse the number
- **Reverse** the digits of the number by repeatedly extracting the last digit using modulo operation and building the reversed number.
- Print the reversed number.

#### Case 2: Count the number of digits
- Convert the number to a string or repeatedly divide the number by 10 and increment `i` to count the digits.
- Print the number of digits.

#### Case 3: Product of even digits
- For each digit in the number, check if it is even (i.e., `digit % 2 == 0`).
- Multiply the even digits together and print the result.

#### Case 4: First and last digits and their sum
- Extract the first digit and last digit of the number.
- Print the first digit, last digit, and their sum.

#### Case 5: Swap the first and last digits
- Swap the first and last digits and construct the new number by keeping the middle part of the original number.
- Print the new swapped number.

#### Case 6: Palindrome check
- Compare the original number with its reverse.
- If they are equal, print that the number is a palindrome; otherwise, print that it is not.

#### Case 7: Frequency of each digit
- Loop through each digit of the number and increment the corresponding index in the `digitFrequency` array.
- Print a frequency table of each digit.

#### Case 8: Strong number check
- Calculate the sum of the factorials of the digits of the number.
- If the sum is equal to the original number, print that it is a strong number; otherwise, print that it is not.

#### Case 9: Perfect number check
- Find all divisors of the number (excluding the number itself).
- Sum the divisors.
- If the sum equals the original number, print that it is a perfect number; otherwise, print that it is not.

#### Case 10: Exit
- Exit the program.

### 5. End the program
- Repeat the process until the user selects the "Exit" option.
