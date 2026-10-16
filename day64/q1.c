Q114 Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

#include <stdio.h>
#include <string.h>

#define MAX_LEN 100005

// Function to find the length of the longest substring without repeating characters
int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLength = 0;
    int start = 0;
    
    // Array to store the last seen index of each ASCII character.
    // Initialized to -1 indicating the character hasn't been seen yet.
    int lastSeen[256];
    for (int i = 0; i < 256; i++) {
        lastSeen[i] = -1;
    }
    
    for (int end = 0; end < n; end++) {
        unsigned char currentChar = s[end];
        
        // If the character was seen inside the current window, 
        // shift the start pointer to the right of the previous occurrence.
        if (lastSeen[currentChar] >= start) {
            start = lastSeen[currentChar] + 1;
        }
        
        // Update the last seen position of the character
        lastSeen[currentChar] = end;
        
        // Calculate the window size and update maxLength if it's larger
        int currentLength = end - start + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
    }
    
    return maxLength;
}

int main() {
    char s[MAX_LEN];
    
    // Read the string input (including spaces) safely
    if (fgets(s, sizeof(s), stdin) != NULL) {
        // Remove trailing newline character added by fgets if present
        size_t len = strlen(s);
        if (len > 0 && s[len - 1] == '\n') {
            s[len - 1] = '\0';
        }
        
        // Compute and print the result
        int result = lengthOfLongestSubstring(s);
        printf("%d\n", result);
    }
    
    return 0;
}
