Q59 Count even and odd numbers in an array.

#include <stdio.h>

int main() {
    // 1. Initialize the array and its variables
    int arr[] = {12, 37, 84, 19, 45, 6, 23};
    
    // Calculate the total number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int even_count = 0;
    int odd_count = 0;

    // 2. Loop through the array to check each number
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;  // Increment if divisible by 2
        } else {
            odd_count++;   // Increment if not divisible by 2
        }
    }

    // 3. Print the final counts
    printf("Total Even Numbers: %d\n", even_count);
    printf("Total Odd Numbers: %d\n", odd_count);

    return 0;
}
