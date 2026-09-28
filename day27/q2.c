Q54 Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

   #include <stdio.h>

int main() {
    int n = 4; // Number of rows for the upper half (including the middle row)
    int i, j;

    // 1. Upper Half of the Diamond (Rows 1 to 4)
    for (i = 1; i <= n; i++) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // 2. Lower Half of the Diamond (Rows 3 down to 1)
    for (i = n - 1; i >= 1; i--) {
        // Print spaces
        for (j = 1; j <= n - i; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
