Q98 Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void printInitialsWithSurname(char* name) {
    int len = strlen(name);
    
    // Find the starting index of the last name (surname)
    int lastSpaceIndex = -1;
    for (int i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            lastSpaceIndex = i;
            break;
        }
    }
    
    // If there is no space, the entire input is treated as the surname
    if (lastSpaceIndex == -1) {
        printf("%s\n", name);
        return;
    }
    
    // Step 1: Print the initials for all names before the surname
    if (len > 0 && name[0] != ' ') {
        printf("%c. ", toupper(name[0]));
    }
    
    for (int i = 1; i < lastSpaceIndex; i++) {
        // Look for the start of subsequent middle names
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c. ", toupper(name[i + 1]));
        }
    }
    
    // Step 2: Print the full surname
    printf("%s\n", &name[lastSpaceIndex + 1]);
}

int main() {
    char name[100];
    
    printf("Enter a full name: ");
    // Reads a full line of text including spaces safely
    fgets(name, sizeof(name), stdin);
    
    // Remove the trailing newline character added by fgets
    name[strcspn(name, "\n")] = '\0';
    
    printf("Formatted Name: ");
    printInitialsWithSurname(name);
    
    return 0;
}
