#include <iostream>

using namespace std;

int main () {
    int num, temp, choice, last, first, sumFL, swap0 = 0, swap1, swap2, reverse = 0, numDigit = 0, prodEven = 1, power = 1, pal = 0;
    int digit_freq[10] = {}, digit_num, digit_round = 0, place = 0, sum_factorial = 0, num_factorial, factorial_num[20], perfect = 0;

    cout << "Playing with Numbers" << endl;
    cout << "Enter number: ";
    cin >> num;
    temp = num;

    cout << "1. Print Reverse" << endl;
    cout << "2. Number of digits" << endl;
    cout << "3. Product of even digits" << endl;
    cout << "4. First digit, last digit and sum" << endl;
    cout << "5. First and last digit swap" << endl;
    cout << "6. Check if it is a palindrome" << endl;
    cout << "7. Frequency of digits" << endl;
    cout << "8. Check if it is Strong" << endl;
    cout << "9. Check if it is Perfect" << endl;
    cin >> choice;

    switch (choice) {
        case 1: goto a;
        break;
        case 2: goto b;
        break;
        case 3: goto c;
        break;
        case 4: goto d;
        break;
        case 5: goto e;
        break;
        case 6: goto f;
        break;
        case 7: goto g;
        break;
        case 8: goto h;
        break;
        case 9: goto i;
        break;
    }

    a:
    while (num != 0) {
        int i = num % 10;
        reverse = (reverse * 10) + i;
        num /= 10;
    } cout << reverse << endl;
    return 0;

    b:
    while (num != 0) {
        num /= 10;
        numDigit ++;
    } cout << numDigit << endl;
    return 0;

    c:
    while (num != 0) {
        int j = num % 10;
        if (j % 2 == 0) {
            prodEven *= j;
        }
        num /= 10;
    } cout << prodEven << endl;
    return 0;

    d:
    last = num % 10;
    while (num != 0) {
        first = num;
        num /= 10;
    }
    cout << "The first number is: " << first << endl;
    cout << "The last number is: " << last << endl;
    sumFL = first + last;
    cout << "Their sum = " << sumFL << endl;
    return 0;

    e:
    swap2 = num % 10;
    num /= 10;
    while (num != 0) {
        int i = num % 10;
        swap1 = num % 10;
        swap0 = swap0 + (i * power);
        power *= 10;
        num /= 10;
        if (num < 10) {
            break;
        }
    }
    power *= 10;
    swap1 = temp / power;
    swap2 *= power;
    swap2 = swap2 + ((swap0 * 10) + swap1);
    cout << swap2 << endl;

    return 0;
    f:
    while (num != 0) {
        int i = num % 10;
        pal = (pal * 10) + i;
        num /= 10;
    }
    if (pal == temp) {
        cout << "It is a palindrome" << endl;
    } else {
        cout << "It is not palindrome" << endl;
    }

    return 0;
    g:
    while (num != 0) {
        digit_num = num % 10;
        digit_freq[digit_num]++;
        num /= 10;
    }
    cout << "The Digit" << "     " << "Its Frequency" << endl;
    while (digit_round < 10) {
        if (digit_freq[digit_round] > 0) {
        cout << "   " << digit_round << " -------------- " << digit_freq[digit_round] << endl;
        } digit_round++;
    }

    return 0;
    h:
    while (num != 0) {
        factorial_num[place] = num % 10;
        place++;
        num /= 10;
    }
    while (place >= 0){ 
        num_factorial = 1;
        for (int i = 1; i <= factorial_num[place]; i++) {
            num_factorial *= i;
        }
        sum_factorial += num_factorial;
        place--;
    }
    if (sum_factorial == temp) {
        cout << "It is a strong number" << endl;
    } else {
        cout << "It is not a strong number" << endl;
    }

    return 0;
    i:
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            perfect += i;
        }
    } if (perfect == temp) {
        cout << "It is a perfect number" << endl;
    } else {
        cout << "It is not a perfect number" << endl;
    }

    return 0;
}
