Q34 Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int n, isPrime = 1;

    // Prompt user for input
    printf("Enter a positive integer: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Numbers less than or equal to 1 are not prime
    if (n <= 1) {
        isPrime = 0;
    } else {
        // Loop from 2 up to the square root of n (i * i <= n)
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0; // Factor found, not prime
                break;       // Exit loop early
            }
        }
    }

    // Output the result
    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    return 0;
}

