Q112 Write a program to take an integer array arr as input. The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm. Print the maximum sum as output. If all elements are negative, print the largest (least negative) element.

#include <stdio.h>
#include <stdlib.h>

// Function to find the maximum subarray sum using Kadane's Algorithm
int maxSubarraySum(int arr[], int n) {
    // Initialize with the first element to correctly handle all-negative arrays
    int max_so_far = arr[0];
    int max_ending_here = arr[0];

    for (int i = 1; i < n; i++) {
        // Decide whether to add the current element to the existing subarray 
        // or start a completely new subarray from the current element
        if (arr[i] > max_ending_here + arr[i]) {
            max_ending_here = arr[i];
        } else {
            max_ending_here = max_ending_here + arr[i];
        }

        // Update the maximum sum found so far if the current subarray sum is larger
        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }
    }

    return max_so_far;
}

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = maxSubarraySum(arr, n);
    printf("The maximum sum of a contiguous subarray is: %d\n", max_sum);

    // Free dynamically allocated memory
    free(arr);
    return 0;
}
