Q97 Print the initials of a name.

#include <stdio.h>
#include <ctype.h>  // Required for toupper()

int main() {
    char name[100];

    printf("Enter a full name: ");
    // Reads a full line of text including spaces safely (up to 99 characters)
    fgets(name, sizeof(name), stdin);

    printf("The initials are: ");

    // 1. Print the very first character in uppercase if it's not a space
    if (name[0] != '\0' && name[0] != ' ' && name[0] != '\n') {
        printf("%c", toupper(name[0]));
    }

    // 2. Loop through the string to find spaces and print subsequent characters
    for (int i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            // Check if the character after the space is a valid letter (not another space or newline)
            if (name[i + 1] != '\0' && name[i + 1] != ' ' && name[i + 1] != '\n') {
                printf(" %c", toupper(name[i + 1]));
            }
        }
    }

    printf("\n");
    return 0;
}
