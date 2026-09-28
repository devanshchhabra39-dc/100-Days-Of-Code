Q46 Write a program to print the following pattern:
*****
*****
*****
*****
*****

#include <stdio.h>

int main() {
    int i, j;

    // Outer loop handles the rows (5 rows in total)
    for (i = 0; i < 5; i++) {
        
        // Inner loop handles the columns (5 stars per row)
        for (j = 0; j < 5; j++) {
            printf("*");
        }
        
        // Move to the next line after printing 5 stars
        printf("\n");
    }

    return 0;
}
