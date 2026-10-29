Q126 Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[100];
    char ch;

    // Ask the user for the filename
    printf("Enter the filename: ");
    scanf("%99s", filename);

    // Try to open the file in read mode
    fp = fopen(filename, "r");

    // Check if the file was opened successfully
    if (fp == NULL)
    {
        printf("Error: File does not exist or cannot be opened.\n");
        return 1;
    }

    // Read and display the contents of the file
    printf("\nContents of the file:\n");

    while ((ch = fgetc(fp)) != EOF)
    {
        putchar(ch);
    }

    // Close the file
    fclose(fp);

    return 0;
}