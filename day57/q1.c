Q107 Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance in the array. Previous greater element of an element in the array is the nearest element on the left which is greater than the current element. If there does not exist next greater of current element, then previous greater element for current element is -1.

N.B:
- Print the output for each element in a comma separated fashion.
- Do not use Stack, use brute force approach (nested loop) to solve.

#include <stdio.h>

int main() {
    int n;

    // Input the size of the array
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int arr[n];

    // Input the array elements
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Brute force logic to find the previous greater element
    printf("Previous greater elements: ");
    for (int i = 0; i < n; i++) {
        int prev_greater = -1;

        // Check elements on the left side of the current element
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev_greater = arr[j];
                break; // Found the nearest greater element, exit the inner loop
            }
        }

        // Print the result in a comma-separated fashion
        printf("%d", prev_greater);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}

