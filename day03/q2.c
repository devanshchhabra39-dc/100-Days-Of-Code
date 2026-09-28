Q6 Write a program to swap two numbers using a third variable.

#include <stdio.h>

int main() {
    int first, second, temp;

    // User input
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);

    // Display values before swapping
    printf("\nBefore swapping:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    // Swapping logic using the third variable (temp)
    temp = first;   // Step 1: Copy the value of 'first' into 'temp'
    first = second; // Step 2: Copy the value of 'second' into 'first'
    second = temp;  // Step 3: Copy the value of 'temp' into 'second'

    // Display values after swapping
    printf("\nAfter swapping:\n");
    printf("First number = %d\n", first);
    printf("Second number = %d\n", second);

    return 0;
}
