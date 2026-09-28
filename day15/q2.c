Q30 Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int n, i;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    // Factorials do not exist for negative numbers
    if (n < 0) {
        printf("Error! Factorial of a negative number does not exist.\n");
    } else {
        // Loop to multiply numbers from 1 to n
        for (i = 1; i <= n; ++i) {
            factorial *= i;
        }
        printf("Factorial of %d = %llu\n", n, factorial);
    }

    return 0;
}

