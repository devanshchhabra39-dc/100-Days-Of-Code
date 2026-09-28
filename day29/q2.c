Q58 Find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    // Initialize the array and calculate its size
    int arr[] = {15, 42, 3, 68, 24, -7, 91, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Assume the first element is both max and min
    int max = arr[0];
    int min = arr[0];

    // Loop through the array starting from the second element
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if a larger element is found
        }
        if (arr[i] < min) {
            min = arr[i]; // Update min if a smaller element is found
        }
    }

    // Print the results
    printf("Maximum element: %d\n", max);
    printf("Minimum element: %d\n", min);

    return 0;
}
