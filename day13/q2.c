Q26 Write a program to print numbers from 1 to n.

#include <stdio.h>

int main() {
    int i, n;

    // Ask the user to input the upper limit 'n'
    printf("Enter a number (n): ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d:\n", n);
    
    // Start loop counter from 1 and go up to n
    for(i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n");
    return 0;
}

