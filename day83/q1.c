Q133 Create an enum for months and print how many days each month has.

#include <stdio.h>

// Define an enum for months (1 to 12)
enum Month {
    JANUARY = 1,
    FEBRUARY,
    MARCH,
    APRIL,
    MAY,
    JUNE,
    JULY,
    AUGUST,
    SEPTEMBER,
    OCTOBER,
    NOVEMBER,
    DECEMBER
};

// Function to print the number of days for a given month enum
void printDaysInMonth(enum Month m) {
    switch (m) {
        case JANUARY:
        case MARCH:
        case MAY:
        case JULY:
        case AUGUST:
        case OCTOBER:
        case DECEMBER:
            printf("Month %d: 31 days\n", m);
            break;
        case APRIL:
        case JUNE:
        case SEPTEMBER:
        case NOVEMBER:
            printf("Month %d: 30 days\n", m);
            break;
        case FEBRUARY:
            printf("Month %d: 28 or 29 days (leap year dependent)\n", m);
            break;
        default:
            printf("Invalid month!\n");
    }
}

int main() {
    // Loop through all months from JANUARY to DECEMBER
    for (enum Month m = JANUARY; m <= DECEMBER; m++) {
        printDaysInMonth(m);
    }
    return 0;
}
