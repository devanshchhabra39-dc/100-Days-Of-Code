Q56 Read and print elements of a one-dimensional array.

#include <stdio.h>

int main() {
    int n;

    // 1. Ask the user for the size of the array
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Declare the array of size n
    int arr[n]; 

    // 2. Read elements into the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // 3. Print the elements of the array
    printf("The elements of the array are: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
