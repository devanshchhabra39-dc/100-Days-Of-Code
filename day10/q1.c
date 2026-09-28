Q19 Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

#include <stdio.h>

int main() {
    double side1, side2, side3;

    // Ask the user to input the three sides
    printf("Enter the lengths of the three sides of the triangle: ");
    if (scanf("%lf %lf %lf", &side1, &side2, &side3) != 3) {
        printf("Invalid input. Please enter numerical values.\n");
        return 1;
    }

    // 1. Check for valid triangle sides (each side must be greater than 0)
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Error: Side lengths must be positive numbers greater than 0.\n");
    }
    // 2. Triangle Inequality Theorem check
    else if ((side1 + side2 <= side3) || (side1 + side3 <= side2) || (side2 + side3 <= side1)) {
        printf("The given side lengths do not form a valid triangle.\n");
    }
    // 3. Check for Equilateral Triangle (all sides are equal)
    else if (side1 == side2 && side2 == side3) {
        printf("The triangle is Equilateral.\n");
    }
    // 4. Check for Isosceles Triangle (any two sides are equal)
    else if (side1 == side2 || side2 == side3 || side1 == side3) {
        printf("The triangle is Isosceles.\n");
    }
    // 5. If neither, it must be a Scalene Triangle (all sides are different)
    else {
        printf("The triangle is Scalene.\n");
    }

    return 0;
}

