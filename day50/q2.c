Q100 Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

// Function to print all substrings of a given string
void printAllSubstrings(char str[]) {
    int len = strlen(str);

    // Outer loop: pick the starting character index
    for (int i = 0; i < len; i++) {
        
        // Inner loop: pick the ending character index
        for (int j = i; j < len; j++) {
            
            // Calculate the length of the current substring
            int sub_len = j - i + 1;
            
            // Print the substring starting at pointer (str + i) with length 'sub_len'
            printf("%.*s\n", sub_len, str + i);
        }
    }
}

int main() {
    char str[] = "abcd";
    
    printf("All substrings of \"%s\" are:\n", str);
    printAllSubstrings(str);
    
    return 0;
}
