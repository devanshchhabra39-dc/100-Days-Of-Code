Q89 Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    char str[1000];
    char ch;
    int count = 0;

    // Get the string input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Get the character to search for
    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    // Loop until the end of the string (null terminator '\0')
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    // Output the result
    printf("Frequency of '%c' = %d\n", ch, count);

    return 0;
}
