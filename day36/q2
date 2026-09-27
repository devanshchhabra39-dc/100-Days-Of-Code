Q72 Find the sum of all elements in a matrix.

#include <stdio.h>

int main() {
    int rows, cols;
    int matrix[100][100]; // Declaring a matrix with a maximum size of 100x100
    int sum = 0;

    // 1. Get the dimensions of the matrix
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    // 2. Input the matrix elements from the user
    printf("\nEnter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 3. Calculate the sum of all elements
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            sum += matrix[i][j]; // Add each element to the running total
        }
    }

    // 4. Print the final result
    printf("\nThe sum of all elements in the matrix is: %d\n", sum);

    return 0;
}
