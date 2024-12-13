Write a program that accepts an integer from the user and perform the following. Once you complete solving all the exercises compile it and prepare a menu.

a) Prints the reverses of the number (e.g. input = 4637215 Output=5217364).

b) Counts the number of digits in a given number (e.g. 23,498 has five digits)

c) Find the product of even digits of the a given number (e.g. input=4,923 prod=8)

d) Prints the first and the last digit of the number and find their sum.

e) Swap the first and the last digit of the number.

g) Check whether a number is palindrome or not.

h) Find the frequency of each digit in a given integer and print in table format.

i) Check if a number is Strong or not.

[Hint]: A Strong number is a number, where the sum of the factorial of the digits is equal to the

number itself.

j) Check whether a number is Perfect number or not.

[Hint]: A Perfect Number is an integer where the sum of its divisors minus the number itself

equals the number.


## ***FLOW CHART***

```mermaid
graph TD
    A[Start] --> B[Initialize variables]
    B --> C[Display menu options]
    C --> D[Input number]
    D --> E[Input choice]
    
    E -->|1| F1[Reverse the number]
    F1 --> F2[Iterate through digits]
    F2 --> F3[Compute reverse]
    F3 --> Z[Output result]

    E -->|2| G1[Count digits]
    G1 --> G2[Divide by 10 iteratively]
    G2 --> G3[Count iterations]
    G3 --> Z[Output result]

    E -->|3| H1[Find product of even digits]
    H1 --> H2[Extract digits]
    H2 --> H3[Check if even]
    H3 --> H4[Multiply even digits]
    H4 --> Z[Output result]

    E -->|4| I1[Find first and last digits]
    I1 --> I2[Isolate last digit]
    I2 --> I3[Iterate for first digit]
    I3 --> I4[Compute sum]
    I4 --> Z[Output result]

    E -->|5| J1[Swap first and last digits]
    J1 --> J2[Extract first and last digits]
    J2 --> J3[Recombine digits]
    J3 --> Z[Output result]

    E -->|6| K1[Check if palindrome]
    K1 --> K2[Reverse number]
    K2 --> K3[Compare with original]
    K3 --> Z[Output result]

    E -->|7| L1[Count digit frequency]
    L1 --> L2[Iterate through digits]
    L2 --> L3[Store in array]
    L3 --> Z[Output result]

    E -->|8| M1[Check if strong number]
    M1 --> M2[Extract digits]
    M2 --> M3[Compute factorial of digits]
    M3 --> M4[Sum factorials]
    M4 --> M5[Compare with original]
    M5 --> Z[Output result]

    E -->|9| N1[Check if perfect number]
    N1 --> N2[Find divisors]
    N2 --> N3[Sum divisors]
    N3 --> N4[Compare with original]
    N4 --> Z[Output result]

    Z --> O[End]

```
