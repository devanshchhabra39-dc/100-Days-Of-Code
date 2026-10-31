Q128 Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

#include <stdio.h>
#include <ctype.h>

int main() {
    // Open the file in read-only mode
    FILE *file = fopen("input.txt", "r");
    
    // Check if the file exists and opened successfully
    if (file == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    int vowels = 0;
    int consonants = 0;
    int ch; // Using int because fgetc() returns an int to accommodate EOF

    // Read the file character by character until the End Of File (EOF)
    while ((ch = fgetc(file)) != EOF) {
        // Ignore digits and special characters by checking if it's an alphabet letter
        if (isalpha(ch)) {
            // Convert to lowercase to simplify the condition check
            char lower_ch = tolower(ch);

            // Check if the character is a vowel
            if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || lower_ch == 'o' || lower_ch == 'u') {
                vowels++;
            } else {
                // If it is an alphabet letter and not a vowel, it is a consonant
                consonants++;
            }
        }
    }

    // Close the file stream
    fclose(file);

    // Display the results
    printf("Total Vowels: %d\n", vowels);
    printf("Total Consonants: %d\n", consonants);

    return 0;
}
