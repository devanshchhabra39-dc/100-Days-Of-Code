Q57 Find the sum of array elements.

#include <stdio.h>

int main() {
    int size, i;
    int sum = 0; // Initialize sum to 0 to prevent garbage values

    // 1. Get the size of the array from the user
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    // Declare the array with the user-specified size
    int arr[size];

    // 2. Input array elements from the user
    printf("Enter %d elements:\n", size);
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // 3. Loop through the array to calculate the sum
    for (i = 0; i < size; i++) {
        sum += arr[i]; // Equivalent to: sum = sum + arr[i]
    }

    // 4. Print the final calculated sum
    printf("\nThe sum of all array elements is: %d\n", sum);

    return 0;
}
