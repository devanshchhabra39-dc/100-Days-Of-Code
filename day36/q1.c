Q71 Read and print a matrix.

#include <stdio.h>

int main() {
    int rows, cols;

    // 1. Get the dimensions of the matrix from the user
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // Declare a 2D array (Variable Length Array)
    int matrix[rows][cols];

    // 2. Read the elements of the matrix
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Print the matrix in a proper grid format
    printf("\nThe entered matrix is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d\t", matrix[i][j]); // \t creates clean columns
        }
        printf("\n"); // Moves to the next line after finishing a row
    }

    return 0;
}
