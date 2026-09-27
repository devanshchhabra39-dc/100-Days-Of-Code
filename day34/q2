Q68 Delete an element from an array.

#include <stdio.h>

int main() {
    // Initialize an array with 5 elements
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5; // Current logical size of the array
    int delete_index = 2; // Target index to delete (value 30)

    // Step 1: Validate the index range
    if (delete_index < 0 || delete_index >= size) {
        printf("Deletion not possible. Invalid index.\n");
        return 1;
    }

    // Step 2: Shift subsequent elements to the left
    for (int i = delete_index; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Step 3: Decrement the logical size of the array
    size--;

    // Print the updated array
    printf("Resultant array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
