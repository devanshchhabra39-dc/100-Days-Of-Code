Q93 Check if two strings are anagrams of each other.

#include <stdio.h>
#include <string.h>

// Function to check if two strings are anagrams
int areAnagrams(const char *str1, const char *str2) {
    // If lengths are not equal, they cannot be anagrams
    if (strlen(str1) != strlen(str2)) {
        return 0;
    }

    // Frequency array for 256 possible ASCII characters
    int count[256] = {0};

    // Increment count for str1 and decrement for str2
    for (int i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    // If all frequencies are 0, then strings are anagrams
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";

    if (areAnagrams(str1, str2)) {
        printf("\"%s\" and \"%s\" are anagrams.\n", str1, str2);
    } else {
        printf("\"%s\" and \"%s\" are not anagrams.\n", str1, str2);
    }

    return 0;
}
