Q64 Find the digit that occurs the most times in an integer number.

#include <stdio.h>
#include <stdlib.h>

int main() {
    long long number;
    int digit_counts[10] = {0}; // Array to store frequency of digits 0-9
    
    printf("Enter an integer number: ");
    if (scanf("%lld", &number) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Convert negative number to positive to process digits correctly
    long long temp = llabs(number);

    // Handle the special case where the input is exactly 0
    if (temp == 0) {
        digit_counts[0] = 1;
    } else {
        // Extract digits one by one and increment their counts
        while (temp > 0) {
            int digit = temp % 10;
            digit_counts[digit]++;
            temp /= 10;
        }
    }

    // Find the digit with the maximum frequency
    int most_frequent_digit = 0;
    int max_count = digit_counts[0];

    for (int i = 1; i < 10; i++) {
        if (digit_counts[i] > max_count) {
            max_count = digit_counts[i];
            most_frequent_digit = i;
        }
    }

    // Print the final result
    printf("The digit that occurs the most times is: %d (appeared %d times)\n", 
           most_frequent_digit, max_count);

    return 0;
}
