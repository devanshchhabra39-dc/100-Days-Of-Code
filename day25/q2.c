Q50 Write a program to print the following pattern:
*****
 ****
  ***
   **
    *

    #include <stdio.h>

int main() {
    int rows = 5;

    // Outer loop for rows
    for (int i = rows; i >= 1; i--) {
        // Inner loop for printing stars in each row
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        // Move to the next line after printing all stars in the row
        printf("\n");
    }

    return 0;
}

