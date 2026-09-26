Q38 Write a program to find the sum of digits of a number.

#include <stdio.h>

int main() {
    int num, remainder, sum = 0;

    // Ask the user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Keep the original number for the final print statement
    int originalNum = num;

    // Handle negative numbers by converting to positive
    if (num < 0) {
        num = -num;
    }

    // Loop to extract and sum each digit
    while (num > 0) {
        remainder = num % 10;   // Get the last digit
        sum = sum + remainder;  // Add the digit to the running sum
        num = num / 10;         // Remove the last digit from the number
    }

    // Display the result
    printf("The sum of the digits of %d is: %d\n", originalNum, sum);

    return 0;
}
