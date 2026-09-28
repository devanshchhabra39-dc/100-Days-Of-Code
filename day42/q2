Q84 Convert a lowercase string to uppercase without using built-in functions.

#include <stdio.h>

// Function to convert a lowercase string to uppercase
void convertToUppercase(char str[]) {
    int i = 0;
    
    // Loop through the string until the null terminator '\0' is reached
    while (str[i] != '\0') {
        // Check if the current character is a lowercase letter
        if (str[i] >= 'a' && str[i] <= 'z') {
            // Subtract 32 to shift it to its uppercase counterpart
            str[i] = str[i] - 32;
        }
        i++; // Move to the next character
    }
}

int main() {
    // Declare a character array with a fixed size
    char message[] = "Hello, World! 123 c programming.";
    
    printf("Original string: %s\n", message);
    
    // Call our custom conversion function
    convertToUppercase(message);
    
    printf("Uppercase string: %s\n", message);
    
    return 0;
}
