Q94 Find the longest word in a sentence.

#include <stdio.h>
#include <string.h>

#define MAX_LIMIT 1000

int main() {
    char sentence[MAX_LIMIT];
    char longest_word[MAX_LIMIT] = "";
    char current_word[MAX_LIMIT];
    int i = 0, j = 0;

    printf("Enter a sentence: ");
    // Read an entire line including spaces
    fgets(sentence, sizeof(sentence), stdin);

    // Remove newline character if captured by fgets
    sentence[strcspn(sentence, "\n")] = '\0';

    while (1) {
        // If current character is a delimiter or the end of the string
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            current_word[j] = '\0'; // Null-terminate the current word

            // If the current word is longer than the previously stored longest word
            if (strlen(current_word) > strlen(longest_word)) {
                strcpy(longest_word, current_word);
            }

            j = 0; // Reset index for the next word

            // If we reached the end of the sentence, break the loop
            if (sentence[i] == '\0') {
                break;
            }
        } else {
            // Build the current word character by character
            current_word[j] = sentence[i];
            j++;
        }
        i++;
    }

    printf("The longest word is: \"%s\"\n", longest_word);
    printf("Length of the longest word: %zu\n", strlen(longest_word));

    return 0;
}
