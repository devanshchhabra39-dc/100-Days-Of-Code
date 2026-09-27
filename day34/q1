Q67 Insert an element in an array at a given position.

#include <stdio.h>

#define MAX_SIZE 100 // Maximum capacity of the array

int main() {
    int arr[MAX_SIZE];
    int size, i, position, new_element;

    // 1. Input the current size of the array
    printf("Enter the number of elements in the array (max %d): ", MAX_SIZE);
    scanf("%d", &size);

    if (size >= MAX_SIZE) {
        printf("Array is already at maximum capacity!\n");
        return 1;
    }

    // 2. Input the array elements
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Input the new element and target position
    printf("Enter the element to insert: ");
    scanf("%d", &new_element);
    printf("Enter the position (1 to %d) to insert it: ", size + 1);
    scanf("%d", &position);

    // 4. Validate the input position
    if (position < 1 || position > size + 1) {
        printf("Invalid position! Position must be between 1 and %d.\n", size + 1);
        return 1;
    }

    // 5. Shift elements to the right to create space
    // We start from the end of the array and move backward to the target index
    for (i = size; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    // 6. Insert the new element at the target position
    // (position - 1 converted 1-based position to 0-based index)
    arr[position - 1] = new_element;

    // 7. Update the size of the array
    size++;

    // 8. Print the updated array
    printf("Array after insertion:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
