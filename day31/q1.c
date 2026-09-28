Q61 Search for an element in an array using linear search.

#include <stdio.h>

// Function to perform linear search
// Returns the index of the element if found, or -1 if not found
int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i; // Element found, return its index
        }
    }
    return -1; // Element not found after checking the whole array
}

int main() {
    int arr[] = {12, 45, 67, 89, 23, 90, 34};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target;

    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    
    printf("\nEnter the element to search for: ");
    scanf("%d", &target);

    // Call the linear search function
    int resultIndex = linearSearch(arr, size, target);

    // Display the results
    if (resultIndex != -1) {
        printf("Element %d found at index position: %d\n", target, resultIndex);
    } else {
        printf("Element %d was not found in the array.\n", target);
    }

    return 0;
}
