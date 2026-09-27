Q55 Write a program to print all the prime numbers from 1 to n.

#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int isPrime(int num) {
    // 0 and 1 are not prime numbers
    if (num <= 1) {
        return 0; 
    }
    
    // Check for divisibility from 2 up to the square root of num
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0; // Found a divisor, so it's not prime
        }
    }
    
    return 1; // No divisors found, it is prime
}

int main() {
    int n;

    // Ask the user to input the upper limit 'n'
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Prime numbers between 1 and %d are:\n", n);
    
    // Loop through all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    
    printf("\n");
    return 0;
}
