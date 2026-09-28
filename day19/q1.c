Q37 Write a program to find the LCM of two numbers.

#include <stdio.h>

// Function to calculate GCD using the Euclidean algorithm
int find_gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to calculate LCM
int find_lcm(int a, int b) {
    // LCM formula to avoid overflow: (a / GCD) * b
    return (a / find_gcd(a, b)) * b;
}

int main() {
    int num1, num2, lcm;

    printf("Enter two positive integers: ");
    if (scanf("%d %d", &num1, &num2) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    // Handle negative inputs by converting to positive
    int absolute_num1 = (num1 < 0) ? -num1 : num1;
    int absolute_num2 = (num2 < 0) ? -num2 : num2;

    if (absolute_num1 == 0 || absolute_num2 == 0) {
        printf("LCM of 0 is not defined.\n");
    } else {
        lcm = find_lcm(absolute_num1, absolute_num2);
        printf("The LCM of %d and %d is %d.\n", num1, num2, lcm);
    }

    return 0;
}
