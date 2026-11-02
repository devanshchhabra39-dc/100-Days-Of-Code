Q131 Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.

#include <stdio.h>

// Define the enumeration for days of the week
enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    // Array of strings corresponding to the enum values for clean printing
    const char* dayNames[] = {
        "SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"
    };

    printf("Day Enumeration and Integer Values:\n");
    printf("-----------------------------------\n");

    // Loop through each day from SUNDAY (0) to SATURDAY (6)
    for (int i = SUNDAY; i <= SATURDAY; i++) {
        printf("%-10s -> %d\n", dayNames[i], i);
    }

    return 0;
}
