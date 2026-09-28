Q96 Reverse each word in a sentence without changing the word order.

#include <stdio.h>
#include <string.h>

// Helper function to reverse a substring in-place from 'begin' pointer to 'end' pointer
void reverseWord(char* begin, char* end) {
    char temp;
    while (begin < end) {
        temp = *begin;
        *begin = *end;
        *end = temp;
        begin++;
        end--;
    }
}

// Function to find boundaries and reverse each word
void reverseEachWord(char* str) {
    char* word_begin = str;
    char* temp = str;

    while (*temp) {
        temp++;
        // If we reach a space, we've found the end of a word
        if (*temp == ' ') {
            reverseWord(word_begin, temp - 1);
            word_begin = temp + 1; // Move to the start of the next word
        }
        // If we reach the null-terminator, we've reached the end of the last word
        else if (*temp == '\0') {
            reverseWord(word_begin, temp - 1);
        }
    }
}

int main() {
    // Note: Using a modifiable char array instead of a string literal
    char sentence[] = "Hello World from C Programming";

    printf("Original: %s\n", sentence);

    reverseEachWord(sentence);

    printf("Reversed: %s\n", sentence);

    return 0;
}
