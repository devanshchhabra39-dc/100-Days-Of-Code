Q119 Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_VAL 100000 // Adjust this bound based on the expected input range

int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calloc initializes all elements to false (0)
    bool *visited = (bool *)calloc(MAX_VAL, sizeof(bool));
    if (visited == NULL) {
        printf("Memory allocation failed for tracking array.\n");
        free(arr);
        return 1;
    }

    int repeatedElement = -1;
    bool found = false;

    // Single iteration tracking loop
    for (int i = 0; i < n; i++) {
        int current = arr[i];
        
        // Handle negative numbers or out of bounds if necessary
        if (current < 0 || current >= MAX_VAL) {
            continue; 
        }

        // If already visited, this is the repeated element
        if (visited[current]) {
            repeatedElement = current;
            found = true;
            break; // Stop immediately on finding the duplicate
        }
        
        // Mark the element as visited
        visited[current] = true;
    }

    if (found) {
        printf("The repeated element is: %d\n", repeatedElement);
    } else {
        printf("No repeated element found within the tracking limits.\n");
    }

    // Clean up allocated memory
    free(arr);
    free(visited);

    return 0;
}
