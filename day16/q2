Q32 Write a program to check if a number is a palindrome.

#include <stdio.h>

int main() {
    int num, originalNum, reversedNum = 0, remainder;

    // Prompt user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Store the original number since 'num' will be modified in the loop
    originalNum = num;

    // Reverse the number digit by digit
    while (num != 0) {
        remainder = num % 10;          // Extract the last digit
        reversedNum = reversedNum * 10 + remainder; // Build the reversed number
        num /= 10;                     // Remove the last digit from num
    }

    // Compare original number with the reversed number
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }

    return 0;
}

