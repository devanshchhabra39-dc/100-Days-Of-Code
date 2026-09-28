Q77 Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Function to check if the main diagonal elements are distinct
bool areDiagonalElementsDistinct(int matrix[MAX_SIZE][MAX_SIZE], int n) {
    // Loop through each element on the main diagonal
    for (int i = 0; i < n; i++) {
        // Compare the current diagonal element with subsequent diagonal elements
        for (int j = i + 1; j < n; j++) {
            if (matrix[i][i] == matrix[j][j]) {
                return false; // Found a duplicate element on the diagonal
            }
        }
    }
    return true; // All elements on the diagonal are unique
}

int main() {
    int n;
    int matrix[MAX_SIZE][MAX_SIZE];

    printf("Enter the size of the square matrix (N x N): ");
    if (scanf("%d", &n) != 1 || n <= 0 || n > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check and print the result
    if (areDiagonalElementsDistinct(matrix, n)) {
        printf("\nResult: All elements on the main diagonal are distinct.\n");
    } else {
        printf("\nResult: Elements on the main diagonal are NOT distinct (duplicates exist).\n");
    }

    return 0;
}
