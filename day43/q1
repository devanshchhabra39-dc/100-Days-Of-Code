Q85 Reverse a string.

#include <stdio.h>
#include <string.h>

void reverseString(char* str) {
    if (str == NULL) return; // Handle null pointer safety

    int left = 0;
    int right = strlen(str) - 1;
    char temp;

    // Swap characters from both ends until they meet in the middle
    while (left < right) {
        temp = str[left];
        str[left] = str[right];
        str[right] = temp;

        left++;
        right--;
    }
}

int main() {
    // Note: Must be a mutable char array, not a string literal (e.g., char* s = "hello")
    char myString[] = "Hello, World!"; 
    
    printf("Original: %s\n", myString);
    
    reverseString(myString);
    
    printf("Reversed: %s\n", myString);
    
    return 0;
}
