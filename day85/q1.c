Q135 Assign explicit values starting from 10 and print them.

#include <stdio.h>

int main() {
    // Assign explicit values starting from 10 to an array
    int numbers[] = {10, 20, 30, 40, 50};
    int n = sizeof(numbers) / sizeof(numbers[0]);

    printf("The assigned values are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
