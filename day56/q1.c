Q106 Write a program to take an array arr[] of integers as input, the task is to find the next greater element for each element of the array in order of their appearance in the array. Next greater element of an element in the array is the nearest element on the right which is greater than the current element. If there does not exist next greater of current element, then next greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

#include <stdio.h>

void findNextGreaterElement(int arr[], int n) {
    // Loop through each element of the array
    for (int i = 0; i < n; i++) {
        int nextGreater = -1; // Default if no greater element is found

        // Nested loop to look for the next greater element on the right
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[i]) {
                nextGreater = arr[j];
                break; // Found the nearest greater element, stop searching
            }
        }

        // Print the result in a comma-separated fashion
        if (i == n - 1) {
            printf("%d", nextGreater); // Last element doesn't need a trailing comma
        } else {
            printf("%d, ", nextGreater);
        }
    }
    printf("\n");
}

int main() {
    int n;

    // Take array size as input
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];

    // Take array elements as input
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    printf("Next Greater Elements: ");
    findNextGreaterElement(arr, n);

    return 0;
}
