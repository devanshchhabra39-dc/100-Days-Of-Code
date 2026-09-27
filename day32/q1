Q63 Merge two arrays.

#include <stdio.h>

int main() {
    // 1. Initialize two source arrays
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    
    // Calculate the size (number of elements) of each array
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    // 2. Declare a destination array large enough for both
    int mergedSize = size1 + size2;
    int merged[mergedSize];
    
    int i;

    // 3. Copy elements from the first array
    for (i = 0; i < size1; i++) {
        merged[i] = arr1[i];
    }

    // 4. Copy elements from the second array
    for (i = 0; i < size2; i++) {
        merged[size1 + i] = arr2[i];
    }

    // 5. Print the merged array
    printf("Merged Array: ");
    for (i = 0; i < mergedSize; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}
