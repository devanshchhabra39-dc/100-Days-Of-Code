Q41 Write a program to swap the first and last digit of a number

#include <stdio.h>
#include <math.h>

int main() {
    int num, swappedNum;
    int firstDigit, lastDigit, digitsCount;

    // Input the number from the user
    printf("Enter any positive integer: ");
    if (scanf("%d", &num) != 1 || num < 0) {
        printf("Please enter a valid positive number.\n");
        return 1;
    }

    // Single-digit numbers remain unchanged
    if (num < 10) {
        printf("Original number: %d\n", num);
        printf("Number after swapping: %d\n", num);
        return 0;
    }

    // Step 1: Find the last digit
    lastDigit = num % 10;

    // Step 2: Find total exponents/digits minus 1 using base-10 logarithm
    digitsCount = (int)log10(num);

    // Step 3: Extract the first digit
    firstDigit = (int)(num / pow(10, digitsCount));

    // Step 4: Reconstruct the number with swapped digits
    // Remove the first digit, add the new first digit (lastDigit)
    swappedNum = num - (firstDigit * (int)pow(10, digitsCount));
    swappedNum = swappedNum + (lastDigit * (int)pow(10, digitsCount));

    // Remove the original last digit, add the new last digit (firstDigit)
    swappedNum = swappedNum - lastDigit + firstDigit;

    // Output the results
    printf("Original number: %d\n", num);
    printf("Number after swapping: %d\n", swappedNum);

    return 0;
}


