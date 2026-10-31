Q129 A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    int number;
    long long sum = 0; // Use long long to prevent integer overflow for large sets
    int count = 0;
    double average = 0.0;

    // Open the file in read mode
    file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error: Could not open file numbers.txt\n");
        return 1;
    }

    // fscanf automatically skips spaces, tabs, and newlines
    while (fscanf(file, "%d", &number) == 1) {
        sum += number;
        count++;
    }

    // Close the file stream
    fclose(file);

    // Print results and handle potential empty file scenario
    if (count > 0) {
        average = (double)sum / count;
        printf("Total integers read: %d\n", count);
        printf("Sum: %lld\n", sum);
        printf("Average: %.2f\n", average);
    } else {
        printf("The file is empty or contains no valid integers.\n");
    }

    return 0;
}
