Q28 Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n;
    unsigned long long product = 1; // Used to handle larger result sizes
    int found_even = 0;

    // Prompt user for input
    printf("Enter the value of n: ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Calculate product of even numbers
    for (int i = 2; i <= n; i += 2) {
        product *= i;
        found_even = 1;
    }

    // Print the result
    if (found_even && n >= 2) {
        printf("The product of even numbers from 1 to %d is: %llu\n", n, product);
    } else {
        printf("There are no even numbers between 1 and %d.\n", n);
    }

    return 0;
}

