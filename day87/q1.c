Q137 Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.

#include <stdio.h>

// Define the enum for user roles
typedef enum {
    ROLE_GUEST,
    ROLE_USER,
    ROLE_ADMIN
} UserRole;

// Function to display a message based on the role
void displayRoleMessage(UserRole role) {
    switch (role) {
        case ROLE_ADMIN:
            printf("Welcome, Admin! You have full access to the dashboard and settings.\n");
            break;
        case ROLE_USER:
            printf("Welcome back! You can view your profile and manage your content.\n");
            break;
        case ROLE_GUEST:
            printf("Welcome, Guest! Please sign up or log in to unlock more features.\n");
            break;
        default:
            printf("Error: Unknown user role.\n");
            break;
    }
}

int main() {
    // Testing the function with different roles
    UserRole currentRole = ROLE_USER;
    
    printf("Current User Status: ");
    displayRoleMessage(currentRole);

    // Testing an Admin message
    currentRole = ROLE_ADMIN;
    printf("Elevating privileges: ");
    displayRoleMessage(currentRole);

    return 0;
}
