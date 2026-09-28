Q83 Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h> // Required for tolower() and isalpha()

int main() {
    char str[200];
    int vowels = 0;
    int consonants = 0;

    printf("Enter a string: ");
    // Reads a full line of text including spaces safely
    fgets(str, sizeof(str), stdin); 

    // Loop through each character until the null terminator
    for (int i = 0; str[i] != '\0'; i++) {
        // Check if the character is an alphabet letter
        if (isalpha((unsigned char)str[i])) {
            // Convert to lowercase to minimize comparison checks
            char ch = tolower((unsigned char)str[i]);

            // Check for vowels
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            } else {
                // If it is an alphabet but not a vowel, it's a consonant
                consonants++;
            }
        }
    }

    // Print the results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
