Q40 Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int main() {
    char binary[MAX_SIZE];
    char onesComp[MAX_SIZE];
    int i, length;
    int isValid = 1;

    // Input the binary string from the user
    printf("Enter a binary number: ");
    scanf("%99s", binary); 

    length = strlen(binary);

    // Loop through each bit to invert it
    for(i = 0; i < length; i++) {
        if(binary[i] == '1') {
            onesComp[i] = '0';
        } 
        else if(binary[i] == '0') {
            onesComp[i] = '1';
        } 
        else {
            // Check for non-binary characters
            isValid = 0;
            break;
        }
    }
    
    // Add the null terminator to make it a valid string
    onesComp[length] = '\0';

    // Print the results if input was valid
    if(isValid) {
        printf("Original Binary:  %s\n", binary);
        printf("1's Complement:   %s\n", onesComp);
    } else {
        printf("Error: Invalid binary input. Please enter only 0s and 1s.\n");
    }

    return 0;
}

