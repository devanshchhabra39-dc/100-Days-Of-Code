Q78 Find the sum of main diagonal elements for a square matrix.

#include <stdio.h>

int main() {
    int n, sum = 0;

    // 1. Get the size of the square matrix
    printf("Enter the size of the square matrix (N x N): ");
    scanf("%d", &n);

    int matrix[n][n];

    // 2. Input matrix elements from the user
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Compute the sum of the main diagonal elements
    for (int i = 0; i < n; i++) {
        sum += matrix[i][i]; // Elements where row index equals column index
    }

    // 4. Output the result
    printf("\nSum of the main diagonal elements = %d\n", sum);

    return 0;
}
