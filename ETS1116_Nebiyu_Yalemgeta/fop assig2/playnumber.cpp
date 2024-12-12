#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice, n, original, reverse, count, product, first, last, sum;
    int num_digits, swapped, temp, sum_fact, sum_divisors;
    int freq[10];

    do {
        cout << "Choose a functionality:\n1. Reverse the number\n2. Count digits\n3. Product of even digits\n4. First and last digit sum\n5. Swap first and last digit\n6. Check palindrome\n7. Digit frequency\n8. Check Strong number\n9. Check Perfect number\n0. Exit\nEnter your choice: ";
        cin >> choice;

        if (choice == 0) break;
        
        cout << "Enter an integer: ";
        cin >> n;
        original = n;
        reverse = 0; count = 0; product = 1; sum = 0;
        for (int i = 0; i < 10; i++) freq[i] = 0;

        switch(choice) {
            case 1:
                while (n != 0) { last = n % 10; reverse = reverse * 10 + last; n /= 10; }
                cout << "Reverse: " << reverse << endl;
                break;
            case 2:
                while (n != 0) { n /= 10; count++; }
                cout << "Number of digits: " << count << endl;
                break;
            case 3:
                while (n != 0) { last = n % 10; if (last % 2 == 0) product *= last; n /= 10; }
                cout << "Product of even digits: " << product << endl;
                break;
            case 4:
                first = original; while (first >= 10) first /= 10; last = original % 10;
                cout << "Sum of first and last digit: " << first + last << endl;
                break;
            case 5:
                first = original; while (first >= 10) first /= 10; last = original % 10;
                num_digits = log10(original); swapped = last * pow(10, num_digits) + (original % int(pow(10, num_digits))) / 10 * 10 + first;
                cout << "After swapping: " << swapped << endl;
                break;
            case 6:
                temp = original; reverse = 0;
                while (temp != 0) { last = temp % 10; reverse = reverse * 10 + last; temp /= 10; }
                cout << (reverse == original ? "Palindrome" : "Not a palindrome") << endl;
                break;
            case 7:
                n = original;
                while (n != 0) { last = n % 10; freq[last]++; n /= 10; }
                for (int i = 0; i < 10; i++) if (freq[i] > 0) cout << i << ": " << freq[i] << endl;
                break;
            case 8:
                sum_fact = 0; n = original;
                while (n != 0) { int digit = n % 10; int fact = 1; for (int i = 1; i <= digit; i++) fact *= i; sum_fact += fact; n /= 10; }
                cout << (sum_fact == original ? "Strong number" : "Not a strong number") << endl;
                break;
            case 9:
                sum_divisors = 0;
                for (int i = 1; i < original; i++) if (original % i == 0) sum_divisors += i;
                cout << (sum_divisors == original ? "Perfect number" : "Not a perfect number") << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
        cout << endl;
    } while (true);
    
    return 0;
}
