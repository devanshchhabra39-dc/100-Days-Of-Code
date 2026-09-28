Q47 Write a program to print the following pattern:
*
**
***
****
***** 

#include <stdio.h>

int main() {
    int i, j, rows = 5;

    // Outer loop for the number of rows
    for (i = 1; i <= rows; i++) {
        
        // Inner loop to print stars for each row
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        
        // Move to the next line after printing all stars in a row
        printf("\n");
    }

    return 0;
}
