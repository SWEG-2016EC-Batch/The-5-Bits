#include <iostream>
using namespace std;

int main () {
    int number, num[10], choice;
    int reverse = 0, digits = 0, product = 1; 
    int last, first, sum; 
    int last_swap, first_swap, swap_in = 0, power = 1;
    int reverse_pal = 0, digit_freq[10] = {}, digit_num, digit_round = 0;
    int factorial_num[20], place = 0, sum_factorial = 0, num_factorial;
    int perfect = 0;
    
    cout << "Welcome" << endl;
    cout << "Please enter your number" << endl;
    cin >> number;

    cout << "If you want the reverses of the number, press 1" << endl;
    cout << "If you want the number of digits in a given number, press 2" << endl;
    cout << "If you want to find product of even digits of the a given number, press 3" << endl;
    cout << "If you want to know the first and the last digit of the number and find their sum, press 4" << endl;
    cout << "If you want to swap the first and the last digit of the number, press 5" << endl;
    cout << "If you want to check whether a number is palindrome or not, press 6" << endl;
    cout << "If you want to find the frequency of each digit in a given integer and print in table format, press 7" << endl;
    cout << "If you want to check if a number is Strong or not, press 8" << endl;
    cout << "If you want to check whether a number is Perfect number or not, press 9" << endl;
    
    cin >> choice;
    switch (choice) {

    
    case 1: {
    num[1] = number;
    while (num[1] != 0) {
        int i = num[1] % 10;
        reverse = (reverse * 10) + i;
        num[1] /= 10;
    } cout << reverse << endl;
    break;
    }

    case 2: {
    num[2] = number;
    while (num[2] != 0) {
        num[2] /= 10;
        digits ++;
    } cout << digits << endl;
    break;
    }

    case 3: {
    num[3] = number;
    while (num[3] != 0) {
        int j = num[3] % 10;
        if (j % 2 == 0) {
            product *= j;
        }
        num[3] /= 10;
    } cout << product << endl;
    break;
    }

    case 4: {
    num[4] = number;
    last = num[4] % 10;
    while (num[4] != 0) {
        first = num[4];
        num[4] /= 10;
    }
    cout << "The first number is: " << first << endl;
    cout << "The last number is: " << last << endl;
    sum = first + last;
    cout << sum << endl;
    break;
    }

    case 5: {
    num[5] = number;
    last_swap = num[5] % 10;
    num[5] /= 10;
    while (num[5] != 0) {
        int i = num[5] % 10;
        first_swap = num[5] % 10;
        swap_in = swap_in + (i * power);
        power *= 10;
        num[5] /= 10;
        if (num[5] < 10) {
            break;
        }
        }
    power *= 10;
    first_swap = number / power;
    last_swap *= power;
    last_swap = last_swap + ((swap_in * 10) + first_swap);
    cout << last_swap << endl;
    break;
    }

    case 6: {
    num[6] = number;
    while (num[6] != 0) {
        int i = num[6] % 10;
        reverse_pal = (reverse_pal * 10) + i;
        num[6] /= 10;
    }
    if (reverse_pal == number) {
        cout << "It is palindrome" << endl;
    } else {
        cout << "It is not palindrome" << endl;
    }
    break;
    }

    case 7: {
    num[7] = number;
    while (num[7] != 0) {
        digit_num = num[7] % 10;
        digit_freq[digit_num]++;
        num[7] /= 10;
    }
    cout << "The Digit" << "     " << "Its Frequency" << endl;
    while (digit_round < 10) {
        if (digit_freq[digit_round] > 0) {
        cout << "   " << digit_round << " -------------- " << digit_freq[digit_round] << endl;
        } digit_round++;
    }
    break;
    }

    case 8: {
    num[8] = number;
    while (num[8] != 0) {
        factorial_num[place] = num[8] % 10;
        place++;
        num[8] /= 10;
    }
    while (place >= 0){ 
        num_factorial = 1;
        for (int i = 1; i <= factorial_num[place]; i++) {
            num_factorial *= i;
        }
        sum_factorial += num_factorial;
        place--;
    }
    if (sum_factorial == number) {
        cout << "It is a strong number" << endl;
    } else {
        cout << "It is not a strong number" << endl;
    }
    break;
    }
    
    case 9: {
    num[9] = number;
    for (int i = 1; i < num[9]; i++) {
        if (num[9] % i == 0) {
            perfect += i;
        }
    } if (perfect == number) {
        cout << "It is a perfect number" << endl;
    } else {
        cout << "It is not a perfect number" << endl;
    }
    break;
    }
    }
}