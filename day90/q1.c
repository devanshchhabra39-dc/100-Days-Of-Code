Q140 Define a struct with enum Gender and print person's gender.

#include <stdio.h>

// Define the enum Gender
enum Gender {
    MALE,
    FEMALE,
    OTHER
};

// Define the struct Person containing the enum
struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    // Initialize a Person instance
    struct Person p1 = {"Alice", FEMALE};

    // Print name and gender
    printf("Name: %s\n", p1.name);

    printf("Gender: ");
    switch (p1.gender) {
        case MALE:
            printf("Male\n");
            break;
        case FEMALE:
            printf("Female\n");
            break;
        case OTHER:
            printf("Other\n");
            break;
        default:
            printf("Unknown\n");
    }

    return 0;
}
