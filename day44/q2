Q88 Replace spaces with hyphens in a string.

#include <stdio.h>

void replace_spaces(char *str) {
    // Loop through each character until the null terminator is reached
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            str[i] = '-';
        }
    }
}

int main() {
    // Declare a modifiable character array (string)
    char message[] = "Learning C programming is fun";
    
    printf("Original string: %s\n", message);
    
    // Call the function to modify the string in place
    replace_spaces(message);
    
    printf("Modified string: %s\n", message);
    
    return 0;
}
