Q86 Check if a string is a palindrome.

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a string is a palindrome
bool isPalindrome(const char str[]) {
    int left = 0;
    int right = strlen(str) - 1;

    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Characters don't match, not a palindrome
        }
        left++;
        right--;
    }
    return true; // All characters matched
}

int main() {
    char input[100];

    printf("Enter a string: ");
    // Read string (stops at whitespace)
    scanf("%99s", input); 

    if (isPalindrome(input)) {
        printf("\"%s\" is a palindrome.\n", input);
    } else {
        printf("\"%s\" is not a palindrome.\n", input);
    }

    return 0;
}
