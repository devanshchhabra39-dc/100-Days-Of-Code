Q43 Write a program to check if a number is a strong number.

#include <stdio.h>

// Function to calculate the factorial of a digit
int calculateFactorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num, originalNum, lastDigit;
    int sum = 0;

    // Step 1: Take input from the user
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Save the original number for final comparison
    originalNum = num;

    // Step 2: Extract digits and sum their factorials
    while (num > 0) {
        lastDigit = num % 10;                // Get the last digit
        sum += calculateFactorial(lastDigit); // Add its factorial to sum
        num /= 10;                           // Remove the last digit
    }

    // Step 3: Check if the sum matches the original number
    if (sum == originalNum) {
        printf("%d is a Strong Number.\n", originalNum);
    } else {
        printf("%d is NOT a Strong Number.\n", originalNum);
    }

    return 0;
}
