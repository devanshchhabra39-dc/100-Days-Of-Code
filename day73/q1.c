Q123 Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

#include <stdio.h>
#include <stdlib.h>

#define OUT 0
#define IN  1

int main() {
    char filename[100];
    FILE *file;
    int ch;
    
    unsigned long long characters = 0;
    unsigned long long words = 0;
    unsigned long long lines = 0;
    int state = OUT;
    int last_ch = '\n'; // Used to track if the file ends with a trailing newline

    printf("Enter the filename to open: ");
    if (scanf("%99s", filename) != 1) {
        printf("Error reading filename.\n");
        return 1;
    }

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;
        last_ch = ch;

        // Count lines based on newline character
        if (ch == '\n') {
            lines++;
        }

        // Check for space characters (space, tab, newline)
        if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r') {
            state = OUT;
        } 
        // If it's a non-space character and state was OUT, a new word starts
        else if (state == OUT) {
            state = IN;
            words++;
        }
    }

    fclose(file);

    // Edge case: If the file is not empty and doesn't end with a newline, count the last line
    if (characters > 0 && last_ch != '\n') {
        lines++;
    }

    printf("\n--- File Statistics ---\n");
    printf("Total Characters: %llu\n", characters);
    printf("Total Words:      %llu\n", words);
    printf("Total Lines:      %llu\n", lines);

    return 0;
}
