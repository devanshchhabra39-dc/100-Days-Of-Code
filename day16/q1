Q31 Write a program to take a number as input and print its equivalent binary representation.

#include <stdio.h>

int main() {
    int number, remainder;
    int binary[32]; // Array to store up to 32-bit binary digits
    int i = 0;

    // Take user input
    printf("Enter a decimal number: ");
    if (scanf("%d", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle the edge case for 0
    if (number == 0) {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    // Store remainders in the array
    while (number > 0) {
        binary[i] = number % 2;
        number = number / 2;
        i++;
    }

    // Print the binary array in reverse order
    printf("Binary equivalent: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}

