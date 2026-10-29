Q127 Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    int ch;

    // Open the source file for reading
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input.txt");
        return EXIT_FAILURE;
    }

    // Open the destination file for writing
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error creating output.txt");
        fclose(inputFile);
        return EXIT_FAILURE;
    }

    // Read character by character until the end of the file
    while ((ch = fgetc(inputFile)) != EOF) {
        // Convert lowercase to uppercase and write to the output file
        fputc(toupper(ch), outputFile);
    }

    // Close open file streams to free system resources
    fclose(inputFile);
    fclose(outputFile);

    printf("File processing completed successfully.\n");
    return EXIT_SUCCESS;
}
