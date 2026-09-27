Q66 Insert an element in a sorted array at the appropriate position.

#include <stdio.h>

#define MAX_SIZE 100 // Maximum capacity of the array

// Function to insert an element into a sorted array
void insertInSortedArray(int arr[], int *size, int element) {
    // Check if the array is already full
    if (*size >= MAX_SIZE) {
        printf("Error: Array is full. Cannot insert new element.\n");
        return;
    }

    int i = *size - 1;

    // Start from the end of the array and move backwards.
    // Shift elements to the right to make space for the new element.
    while (i >= 0 && arr[i] > element) {
        arr[i + 1] = arr[i];
        i--;
    }

    // Insert the element at the correct sorted position
    arr[i + 1] = element;

    // Increase the size of the array by 1
    (*size)++;
}

int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50}; // Initial sorted array
    int size = 5;                             // Current number of elements
    int element = 25;                         // Element to be inserted

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Insert the new element
    insertInSortedArray(arr, &size, element);

    printf("Array after insertion: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
