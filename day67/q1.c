Q117 Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.

#include <stdio.h>
#include <stdlib.h>

// Function to merge two sorted arrays
void mergeSortedArrays(int arr1[], int m, int arr2[], int n, int merged[]) {
    int i = 0; // Pointer for arr1
    int j = 0; // Pointer for arr2
    int k = 0; // Pointer for merged array

    // Traverse both arrays and copy the smaller element
    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            merged[k] = arr1[i];
            i++;
        } else {
            merged[k] = arr2[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements of arr1, if any
    while (i < m) {
        merged[k] = arr1[i];
        i++;
        k++;
    }

    // Copy remaining elements of arr2, if any
    while (j < n) {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}

int main() {
    int m, n;

    // Input sizes of the arrays
    printf("Enter the size of the first sorted array (m): ");
    if (scanf("%d", &m) != 1 || m <= 0) return 1;

    int *arr1 = (int *)malloc(m * sizeof(int));
    printf("Enter %d sorted elements for the first array: ", m);
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second sorted array (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) return 1;

    int *arr2 = (int *)malloc(n * sizeof(int));
    printf("Enter %d sorted elements for the second array: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    // Allocate memory for the merged array
    int *merged = (int *)malloc((m + n) * sizeof(int));

    // Merge the arrays
    mergeSortedArrays(arr1, m, arr2, n, merged);

    // Print the merged array
    printf("The merged sorted array is:\n");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    // Free allocated memory
    free(arr1);
    free(arr2);
    free(merged);

    return 0;
}
