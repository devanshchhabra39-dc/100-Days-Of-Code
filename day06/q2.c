Q12 Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

#include <stdio.h>

int main() {
    int number;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Outer if-else block
    if (number >= 0) {
        // Inner (nested) if-else block
        if (number == 0) {
            printf("The number is zero.\n");
        } else {
            printf("%d is a positive number.\n", number);
        }
    } else {
        // Executed if the outer condition (number >= 0) is false
        printf("%d is a negative number.\n", number);
    }

    return 0;
}
