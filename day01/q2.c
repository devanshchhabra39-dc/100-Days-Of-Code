Q2 Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    float num1, num2;
    float sum, difference, product, quotient;

    // Input two numbers from the user
    printf("Enter the first number: ");
    scanf("%f", &num1);

    printf("Enter the second number: ");
    scanf("%f", &num2);

    // Perform arithmetic calculations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Display the results
    printf("\n--- Results ---\n");
    printf("Sum:         %.2f\n", sum);
    printf("Difference:  %.2f\n", difference);
    printf("Product:     %.2f\n", product);

    // Check for division by zero before calculating the quotient
    if (num2 != 0) {
        quotient = num1 / num2;
        printf("Quotient:    %.2f\n", quotient);
    } else {
        printf("Quotient:    Undefined (Cannot divide by zero)\n");
    }

    return 0;
}
