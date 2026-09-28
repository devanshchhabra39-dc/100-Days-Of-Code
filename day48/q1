Q95 Check if one string is a rotation of another.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Function to check if str2 is a rotation of str1
int areRotations(const char *str1, const char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // 1. If lengths are not equal, they cannot be rotations of each other
    if (len1 != len2) {
        return 0;
    }

    // 2. Allocate memory for the concatenated string (len1 * 2 + 1 for null-terminator)
    char *temp = (char *)malloc(sizeof(char) * (len1 * 2 + 1));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }

    // 3. Create the concatenated string: temp = str1 + str1
    strcpy(temp, str1);
    strcat(temp, str1);

    // 4. Check if str2 is a substring of temp
    char *ptr = strstr(temp, str2);

    // 5. Free dynamically allocated memory to avoid memory leaks
    free(temp);

    // If strstr does not return NULL, str2 was found inside temp
    return (ptr != NULL);
}

int main() {
    char str1[] = "ABCD";
    char str2[] = "CDAB";

    if (areRotations(str1, str2)) {
        printf("'%s' and '%s' are rotations of each other.\n", str1, str2);
    } else {
        printf("'%s' and '%s' are NOT rotations of each other.\n", str1, str2);
    }

    return 0;
}
