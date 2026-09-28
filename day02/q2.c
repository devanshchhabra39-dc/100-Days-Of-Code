Q4 Write a program to calculate the area and circumference of a circle given its radius.

#include <stdio.h>

// Define the value of PI as a constant macro
#define PI 3.14159265359

int main() {
    float radius, area, circumference;

    // Prompt the user for the radius
    printf("Enter the radius of the circle: ");
    if (scanf("%f", &radius) != 1 || radius < 0) {
        printf("Error: Please enter a valid non-negative number.\n");
        return 1;
    }

    // Mathematical formulas
    area = PI * radius * radius;          // Area = πr²
    circumference = 2 * PI * radius;      // Circumference = 2πr

    // Print the results rounded to 2 decimal places
    printf("\n--- Results ---\n");
    printf("Area of the circle:         %.2f\n", area);
    printf("Circumference of the circle:  %.2f\n", circumference);

    return 0;
}
