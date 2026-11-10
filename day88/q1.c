Q138 Print all enum names and integer values using a loop.

#include <stdio.h>

// 1. Define the enum
typedef enum {
    COLOR_RED,
    COLOR_GREEN,
    COLOR_BLUE,
    COLOR_YELLOW,
    COLOR_COUNT // Keeps track of the total number of items automatically
} Color;

// 2. Define a matching array of strings
const char* ColorNames[] = {
    "COLOR_RED",
    "COLOR_GREEN",
    "COLOR_BLUE",
    "COLOR_YELLOW"
};

int main() {
    // 3. Loop using the count element
    for (int i = 0; i < COLOR_COUNT; i++) {
        printf("Name: %-12s | Value: %d\n", ColorNames[i], i);
    }

    return 0;
}
