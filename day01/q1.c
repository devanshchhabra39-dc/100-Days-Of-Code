Q1 Write a program to input two numbers and display their sum.

#include <stdio.h>

int main() {
    int num1, num2, sum;

    // Asking the user for input
    printf("Enter two integers: ");
    
    // Reading the two numbers from the user
    scanf("%d %d", &num1, &num2);

    // Calculating the sum
    sum = num1 + num2;

    // Displaying the result
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);

    return 0;
}
