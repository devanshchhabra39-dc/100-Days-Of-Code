Q53 Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

#include <stdio.h>

int main() {
    int i, j;
    
    // 1. Upper half of the pattern (Rows with 1, 3, 5, 7, and 9 stars)
    for (i = 1; i <= 9; i += 2) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    // 2. Lower half of the pattern (Rows with 7, 5, 3, and 1 stars)
    for (i = 7; i >= 1; i -= 2) {
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}
