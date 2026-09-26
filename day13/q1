Q25 Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

#include <stdio.h>

int main() {
    char operator;
    int num1, num2;
    float div_result;

    // Prompt user for the operator
    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);

    // Prompt user for two integer operands
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Perform arithmetic operation based on the operator
    switch (operator) {
        case '+':
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
            
        case '-':
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
            
        case '*':
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
            
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                div_result = (float)num1 / num2; // Typecast for precise decimal result
                printf("Result: %d / %d = %.2f\n", num1, num2, div_result);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
            
        case '%':
            // Check for division by zero in modulus
            if (num2 != 0) {
                printf("Result: %d %% %d = %d\n", num1, num2, num1 % num2);
            } else {
                printf("Error: Modulus by zero is not allowed.\n");
            }
            break;
            
        default:
            printf("Error: Invalid operator entered.\n");
    }

    return 0;
}

