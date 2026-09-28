Q90 Toggle case of each character in a string.

#include <stdio.h>
#include <ctype.h>  // Required for isupper(), islower(), toupper(), tolower()

void toggleCase(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper((unsigned char)str[i])) {
            str[i] = tolower((unsigned char)str[i]);
        } else if (islower((unsigned char)str[i])) {
            str[i] = toupper((unsigned char)str[i]);
        }
    }
}

int main() {
    // Example string buffer (must be modifiable array, not a string literal pointer)
    char myString[] = "Hello, World! 123";

    printf("Original String: %s\n", myString);

    toggleCase(myString);

    printf("Toggled String:  %s\n", myString);

    return 0;
}
