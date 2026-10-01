Q103 Write a Program to take an array of integers as input, calculate the pivot index of this array. The pivot index is the index where the sum of all the numbers strictly to the left of the index is equal to the sum of all the numbers strictly to the index's right. If the index is on the left edge of the array, then the left sum is 0 because there are no elements to the left. This also applies to the right edge of the array. Print the leftmost pivot index. If no such index exists, print -1.

#include <stdio.h>

// Function to find the pivot index
int findPivotIndex(int arr[], int size) {
    int totalSum = 0;
    int leftSum = 0;

    // Calculate the total sum of all elements in the array
    for (int i = 0; i < size; i++) {
        totalSum += arr[i];
    }

    // Iterate through the array to find the leftmost pivot index
    for (int i = 0; i < size; i++) {
        // Right sum is totalSum minus leftSum minus the current element
        if (leftSum == (totalSum - leftSum - arr[i])) {
            return i; // Found the leftmost pivot index
        }
        leftSum += arr[i]; // Update the left sum for the next iteration
    }

 // Return -1 if no pivot index exists
    return -1;
}

int main() {
    int size;

    // Take the size of the array as input
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &size) != 1 || size <= 0) {
        printf("-1.\n");
        return 0;
    }

    int arr[size];

    // Take array elements as input
    printf("Enter %d integers:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }  
        
    // Calculate and print the pivot index
    int pivotIndex = findPivotIndex(arr, size);
    printf("%d.\n", pivotIndex);

    return 0;
}