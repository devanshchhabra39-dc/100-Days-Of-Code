Q139 Show that enums store integers by printing assigned values.

#include <stdio.h>

// Define an enum with default and custom integer assignments
enum Status {
    SUCCESS = 200,   // Explicitly assigned integer
    WARNING,         // Automatically becomes 201
    ERROR = 500,     // Explicitly assigned integer
    UNKNOWN          // Automatically becomes 501
};

int main() {
    // Declare variables of type enum Status
    enum Status s1 = SUCCESS;
    enum Status s2 = WARNING;
    enum Status s3 = ERROR;
    enum Status s4 = UNKNOWN;

    // Print the underlying integer values using %d
    printf("SUCCESS has integer value: %d\n", s1);
    printf("WARNING has integer value: %d\n", s2);
    printf("ERROR has integer value: %d\n", s3);
    printf("UNKNOWN has integer value: %d\n", s4);

    return 0;
}
