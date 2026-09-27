Q76 Check if a matrix is symmetric.
#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100];
    int isSymmetric = 1; // 1 means true, 0 means false

    // 1. Get matrix dimensions
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // 2. A symmetric matrix MUST be square
    if (rows != cols) {
        printf("The matrix is not symmetric (It must be a square matrix).\n");
        return 0;
    }

    // 3. Input matrix elements
    printf("Enter the matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // 4. Check for symmetry
    // Optimization: Loop j from 'i + 1' to only check elements above the main diagonal
    for (int i = 0; i < rows; i++) {
        for (int j = i + 1; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                isSymmetric = 0; // Found a mismatch
                break;
            }
        }
        if (!isSymmetric) {
            break; 
        }
    }

    // 5. Output the result
    if (isSymmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is NOT symmetric.\n");
    }

    return 0;
}
