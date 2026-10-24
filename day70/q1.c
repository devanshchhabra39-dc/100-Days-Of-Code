Q120 Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

void to_sentence_case(char *str) {
    bool is_new_sentence = true;

    for (int i = 0; str[i] != '\0'; i++) {
        // If we encounter a sentence-ending punctuation mark, set the flag
        if (str[i] == '.' || str[i] == '!' || str[i] == '?') {
            is_new_sentence = true;
        } 
        // If it's an alphabetic character, handle its casing
        else if (isalpha((unsigned char)str[i])) {
            if (is_new_sentence) {
                str[i] = toupper((unsigned char)str[i]);
                is_new_sentence = false; // Lowercase subsequent letters until next punctuation
            } else {
                str[i] = tolower((unsigned char)str[i]);
            }
        }
        // Whitespaces or special symbols between punctuation and the next sentence 
        // are skipped naturally without resetting the flag.
    }
}

int main() {
    char str[1000];

    printf("Enter a string: ");
    // Using fgets instead of gets for secure boundary checking
    if (fgets(str, sizeof(str), stdin) != NULL) {
        
        to_sentence_case(str);

        printf("Sentence case output: %s", str);
    }

    return 0;
}
