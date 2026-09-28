Q44 Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    // Prompt user for the number of terms
    printf("Enter the number of terms (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }

    // The first term of the series is explicitly 1
    sum += 1.0;

    // Subsequent terms start with numerator = 3 and denominator = 4
    double numerator = 3.0;
    double denominator = 4.0;

    // Loop through the remaining terms
    for (int i = 2; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2.0;   // Numerator increases by 2 each step (3, 5, 7, ...)
        denominator += 2.0; // Denominator increases by 2 each step (4, 6, 8, ...)
    }

    // Print the final calculated sum
    printf("The sum of the series up to %d terms is: %.6lf\n", n, sum);

    return 0;
}
