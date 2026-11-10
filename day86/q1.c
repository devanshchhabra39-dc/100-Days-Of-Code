Q136 Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch. 

#include <stdio.h>

// Define an enum for the menu operations
// Setting ADD = 1 makes the implicit integer values match the menu options (ADD=1, SUBTRACT=2, MULTIPLY=3)
enum Operation {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    int choice;
    double num1, num2, result;

    // Display the menu
    printf("--- Calculator Menu ---\n");
    printf("1. ADD\n");
    printf("2. SUBTRACT\n");
    printf("3. MULTIPLY\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &choice);

    // Validate the menu choices
    if (choice < ADD || choice > MULTIPLY) {
        printf("Error: Invalid menu choice!\n");
        return 1; 
    }

    // Get input values for the operands
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Cast the integer choice to our enum type for the switch statement
    switch ((enum Operation)choice) {
        case ADD:
            result = num1 + num2;
            printf("Result: %.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;

        case SUBTRACT:
            result = num1 - num2;
            printf("Result: %.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;

        case MULTIPLY:
            result = num1 * num2;
            printf("Result: %.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;

        default:
            printf("Error: Unexpected operation.\n");
            break;
    }

    return 0;
}
