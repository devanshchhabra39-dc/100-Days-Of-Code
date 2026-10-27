Q125 Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[256];

    // Open the file in append mode ("a")
    // This moves the file pointer to the end and ensures existing data is not overwritten
    file = fopen("example.txt", "a");

    // Check if the file was opened successfully
    if (file == NULL) {
        printf("Error: Could not open or create the file.\n");
        return 1;
    }

    // Prompt the user for input
    printf("Enter a line of text to append: ");
    
    // Read a line of text safely from standard input
    if (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        // Write the user's input directly into the file
        fputs(buffer, file);
        printf("Text successfully appended!\n");
    } else {
        printf("Error reading input.\n");
    }

    // Always close the file to free system resources
    fclose(file);

    return 0;
}
