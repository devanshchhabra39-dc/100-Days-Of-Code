Q35 Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    int num, i;

    // Prompt user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    printf("Factors of %d are: ", num);

    // Loop through all numbers from 1 up to the given number
    for (i = 1; i <= num; ++i) {
        // If num is perfectly divisible by i, then i is a factor
        if (num % i == 0) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

