Q82 Print each character of a string on a new line.

#include <stdio.h>

int main() {
    // Initialize a sample string
    char str[] = "Hello";

    // Loop through the string until the null terminator ('\0') is reached
    for (int i = 0; str[i] != '\0'; i++) {
        printf("%c\n", str[i]);
    }

    return 0;
};
