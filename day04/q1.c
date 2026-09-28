Q7 Write a program to swap two numbers without using a third variable.

#include <stdio.h>

int main() {
    int a, b;

    // Requesting user input
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);

    printf("\n--- Before Swapping ---\n");
    printf("a = %d, b = %d\n", a, b);

    // Swapping logic without a third variable
    a = a + b; // Step 1: 'a' now holds the sum of both numbers
    b = a - b; // Step 2: Subtracting 'b' from the sum gives the original 'a' value
    a = a - b; // Step 3: Subtracting the new 'b' from the sum gives the original 'b' value

    printf("\n--- After Swapping ---\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
