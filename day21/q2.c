Q42 Write a program to check if a number is a perfect number.

#include <stdio.h>

int main() {
    int num, i, sum = 0;

    // Take input from the user
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // Negative numbers and zero cannot be perfect numbers
    if (num <= 0) {
        printf("%d is NOT a perfect number.\n", num);
        return 0;
    }

    // Loop through all numbers from 1 to num / 2 to find proper divisors
    for (i = 1; i <= num / 2; i++) {
        // If i divides num completely, it is a proper divisor
        if (num % i == 0) {
            sum += i; // Add the divisor to sum
        }
    }

    // Check if the sum of divisors equals the original number
    if (sum == num) {
        printf("%d is a PERFECT number.\n", num);
    } else {
        printf("%d is NOT a perfect number.\n", num);
    }

    return 0;
}
