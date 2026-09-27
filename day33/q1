Q65 Search in a sorted array using binary search.

#include <stdio.h>

// Function to perform binary search
// Returns the index of the target if found, otherwise returns -1
int binarySearch(int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        // Prevent potential overflow compared to (low + high) / 2
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid; 
        }

        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        } 
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Element was not present in the array
    return -1;
}

int main() {
    // Binary search REQUIRES a sorted array
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        printf("Element %d found at index: %d\n", target, result);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
