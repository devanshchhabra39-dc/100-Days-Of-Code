Q36 Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, temp;

    // Ask user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Save initial values for final print statement
    int originalNum1 = num1;
    int originalNum2 = num2;

    // Apply Euclidean Algorithm
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2; // Get the remainder
        num1 = temp;        // Update num1 with the previous divisor
    }

    // The last non-zero divisor (now stored in num1) is the HCF/GCD
    printf("HCF (GCD) of %d and %d is: %d\n", originalNum1, originalNum2, num1);

    return 0;
}

