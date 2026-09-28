Q92 Find the first repeating lowercase alphabet in a string.

#include <stdio.h>
#include <string.h>

char findFirstRepeating(const char *str) {
    // Array to keep track of character counts for 'a' through 'z'
    int count[26] = {0};

    // Traverse the string character by character
    for (int i = 0; str[i] != '\0'; i++) {
        // Only process lowercase English letters
        if (str[i] >= 'a' && str[i] <= 'z') {
            int index = str[i] - 'a'; // Map 'a'-'z' to indices 0-25
            count[index]++;

            // The moment a character is seen for the second time, return it
            if (count[index] == 2) {
                return str[i];
            }
        }
    }

    // Return a null character if no repeating character is found
    return '\0';
}

int main() {
    char str[] = "abcdefdae";
    
    char result = findFirstRepeating(str);
    
    if (result != '\0') {
        printf("The first repeating lowercase character is: '%c'\n", result);
    } else {
        printf("No repeating lowercase character found.\n");
    }

    return 0;
}
