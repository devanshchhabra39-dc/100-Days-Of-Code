Q87 Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    char str[200];
    int spaces = 0, digits = 0, specialChars = 0;
    int i = 0;

    printf("Enter a string: ");
    // fgets is safer than gets() as it prevents buffer overflow
    fgets(str, sizeof(str), stdin); 

    // Loop through each character until the end of the string
    while (str[i] != '\0') {
        // Check for digits ('0' to '9')
        if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        // Check for a space character
        else if (str[i] == ' ') {
            spaces++;
        }
        // Ignore standard alphabets and the newline character added by fgets
        else if ((str[i] >= 'a' && str[i] <= 'z') || 
                 (str[i] >= 'A' && str[i] <= 'Z') || 
                 str[i] == '\n') {
            // Do nothing for letters and newlines
        }
        // Everything else is treated as a special character
        else {
            specialChars++;
        }
        
        i++; // Move to the next character
    }

    // Display the final counts
    printf("\n--- Results ---\n");
    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specialChars);

    return 0;
}
