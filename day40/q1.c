Q79 Perform diagonal traversal of a matrix.

#include <stdio.h>

#define ROWS 3
#define COLS 4

void diagonalTraversal(int matrix[ROWS][COLS], int m, int n) {
    // Total number of diagonals is m + n - 1
    int total_diagonals = m + n - 1;

    printf("Diagonal Traversal:\n");
    
    // Loop through each diagonal line
    for (int k = 0; k < total_diagonals; k++) {
        // Determine the starting row and column for the current diagonal
        int row = (k < n) ? 0 : k - n + 1;
        int col = (k < n) ? k : n - 1;

        // Traverse down-left along the diagonal
        while (row < m && col >= 0) {
            printf("%d ", matrix[row][col]);
            row++; // Move down
            col--; // Move left
        }
        printf("\n"); // New line for each diagonal slice
    }
}

int main() {
    // Example 3x4 Matrix
    int matrix[ROWS][COLS] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12}
    };

    diagonalTraversal(matrix, ROWS, COLS);

    return 0;
}
