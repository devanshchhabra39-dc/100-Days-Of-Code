Q27 Write a program to print the sum of the first n odd numbers.

#include <stdio.h>

int main() {
    int n, i, current_odd, sum = 0;

    // Ask the user for the number of terms
    printf("Enter the value of n (how many odd numbers): ");
    scanf("%d", &n);

    printf("The first %d odd numbers are: ", n);
    
    // Loop to find and add the first n odd numbers
    for (i = 1; i <= n; i++) {
        current_odd = 2 * i - 1; // Formula to find the i-th odd number
        printf("%d ", current_odd);
        sum += current_odd;       // Add the odd number to the sum
    }

    // Print the final result
    printf("\nThe sum of the first %d odd numbers is: %d\n", n, sum);

    return 0;
}

