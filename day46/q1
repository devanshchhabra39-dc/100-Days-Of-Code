Q91 Remove all vowels from a string.

#include <stdio.h>
#include <string.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
}

void removeVowels(char *str) {
    int writeIndex = 0;

    for (int readIndex = 0; str[readIndex] != '\0'; readIndex++) {
        // If the current character is NOT a vowel, keep it
        if (!isVowel(str[readIndex])) {
            str[writeIndex] = str[readIndex];
            writeIndex++;
        }
    }
    
    // Null-terminate the modified string
    str[writeIndex] = '\0';
}

int main() {
    char text[100] = "Hello, World! Welcome to C Programming.";

    printf("Original: %s\n", text);
    
    removeVowels(text);
    
    printf("Result:   %s\n", text);

    return 0;
}
