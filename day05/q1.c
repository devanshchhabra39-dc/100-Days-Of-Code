Q9 Write a program to calculate simple and compound interest for given principal, rate, and time.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simple_interest, compound_interest, final_amount;

    // 1. Take inputs from the user
    printf("Enter the Principal amount: ");
    scanf("%f", &principal);

    printf("Enter the annual Interest Rate (in %%): ");
    scanf("%f", &rate);

    printf("Enter the Time period (in years): ");
    scanf("%f", &time);

    // 2. Calculate Simple Interest
    // Formula: SI = (P * R * T) / 100
    simple_interest = (principal * rate * time) / 100.0;

    // 3. Calculate Compound Interest (compounded annually)
    // Formula: Amount = P * (1 + R/100)^T
    // Formula: CI = Amount - P
    final_amount = principal * pow((1 + (rate / 100.0)), time);
    compound_interest = final_amount - principal;

    // 4. Display the results formatted to 2 decimal places
    printf("\n--- Results ---\n");
    printf("Simple Interest   = $%.2f\n", simple_interest);
    printf("Compound Interest = $%.2f\n", compound_interest);
    printf("Total Amount (CI) = $%.2f\n", final_amount);

    return 0;
}
