Q113 Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.

#include <stdio.h>
#include <stdlib.h>

// Comparison function needed for qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// Function to find the kth smallest element
int findKthSmallest(int arr[], int n, int k) {
    // Sort the array in ascending order using standard library qsort
    qsort(arr, n, sizeof(int), compare);
    
    // The kth smallest element will be at index k - 1
    return arr[k - 1];
}

int main() {
    int n, k;

    // Take the size of the array as input
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

    // Take array elements as input
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Take k as input
    printf("Enter the value of k: ");
    scanf("%d", &k);

    // Validate the value of k
    if (k < 1 || k > n) {
        printf("Invalid value of k! k must be between 1 and %d.\n", n);
        free(arr);
        return 1;
    }

    // Find and print the kth smallest element
    int result = findKthSmallest(arr, n, k);
    printf("The %dth smallest element is: %d\n", k, result);

    // Free dynamically allocated memory
    free(arr);
    return 0;
}
