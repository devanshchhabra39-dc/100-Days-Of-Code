Q39 Write a program to find the product of odd digits of a number.

#include <studio.h>
#include <stdlib.h>

int main() {
    int num, temp, rem;
    long long prod = 1;
    int has_odd = 0; // Flag to track if the number contains any odd digits

    printf("Enter a number: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Work with the absolute value to handle negative numbers correctly
    temp = abs(num);

    // Special case for 0 (0 is an even digit)
    if (temp == 0) {
        has_odd = 0;
    } else {
        while (temp > 0) {
            rem = temp % 10; // Extract the last digit

            // Check if the digit is odd
            if (rem % 2 != 0) {
                prod *= rem;   // Multiply to the product
                has_odd = 1;   // Mark that we found at least one odd digit
            }

            temp /= 10;      // Remove the last digit
        }
    }

    // Output the result based on whether odd digits were found
    if (has_odd) {
        printf("The product of the odd digits of %d is: %lld\n", num, prod);
    } else {
        printf("There are no odd digits in %d (Product = 0).\n", num);
    }

    return 0;
}

