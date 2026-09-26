Q10 Write a program to input time in seconds and convert it to hours:minutes:seconds format.

#include <stdio.h>

int main() {
    int total_seconds;
    int hours, minutes, seconds;

    // Prompt user for input
    printf("Enter time in seconds: ");
    if (scanf("%d", &total_seconds) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Mathematical conversions
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Print the time in HH:MM:SS format with leading zeros
    printf("Converted format [H:M:S] -> %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
