Q73 Find the sum of each row of a matrix and store it in an array.

#include <stdio.h>

#define MAX_ROWS 50
#define MAX_COLS 50

int main() {
    int matrix[MAX_ROWS][MAX_COLS];
    int rowSums[MAX_ROWS] = {0}; // Array to store the sum of each row
    int rows, cols;

    // 1. Get matrix dimensions from the user
    printf("Enter the number of rows and columns: ");
    if (scanf("%d %d", &rows, &cols) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    // Validate boundaries
    if (rows > MAX_ROWS || cols > MAX_COLS || rows <= 0 || cols <= 0) {
        printf("Dimensions must be between 1 and 50.\n");
        return 1;
    }

    // 2. Input elements of the matrix
    printf("Enter elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Calculate the sum of each row and store in rowSums array
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            rowSums[i] += matrix[i][j];
        }
    }

    // 4. Display the resulting array
    printf("\nRow sums stored in the array:\n");
    for (int i = 0; i < rows; i++) {
        printf("Sum of row %d = %d\n", i + 1, rowSums[i]);
    }

    return 0;
}
