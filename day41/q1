Q81 Count characters in a string without using built-in length functions.

#include <stdio.h>

int main() {
    // Declare a character array to hold the string
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    // Read the string from the user (handles spaces using %[^\n]s)
    scanf("%[^\n]s", str);

    // Loop until the null character '\0' is reached
    while (str[count] != '\0') {
        count++;
    }

    printf("The number of characters in the string is: %d\n", count);

    return 0;
}
