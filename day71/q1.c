Q121 Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

#include <stdio.h>

int main() {
    char name[100];
    int age;

    // Open info.txt in write mode
    FILE *fptr = fopen("info.txt", "w");

    // Check if file opened successfully
    if (fptr == NULL) {
        printf("Error: Could not open the file.\n");
        return 1;
    }

    // Get name and age from the user
    printf("Enter your name: ");
    scanf(" %[^\n]s", name); // Reads a line of text including spaces

    printf("Enter your age: ");
    scanf("%d", &age);

    // Write name and age to the file using fprintf()
    fprintf(fptr, "Name: %s\nAge: %d\n", name, age);

    // Close the file
    fclose(fptr);

    // Display confirmation message
    printf("Data was successfully saved to info.txt\n");

    return 0;
}
