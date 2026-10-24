Q122 Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). The program should print all the lines to the console until EOF (end of file) is reached.

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char buffer[256]; // Array to temporarily store each line

    // Open the existing file in read-only mode ("r")
    file = fopen("info.txt", "r");

    // Check if the file exists and was opened successfully
    if (file == NULL) {
        perror("Error opening file");
        return EXIT_FAILURE;
    }

    // Read the file line by line until fgets returns NULL (indicating EOF or an error)
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        // Print the current line stored in the buffer to the console
        printf("%s", buffer);
    }

    // Close the file stream to free up system resources
    fclose(file);

    return EXIT_SUCCESS;
}
