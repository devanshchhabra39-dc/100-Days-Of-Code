Q24 Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ₹5/unit 
Next 100 units at ₹7/unit 
Next 100 units at ₹10/unit 
Above at ₹12/unit

#include <stdio.h>

int main() {
    float units, bill = 0;

    // Prompt user for input
    printf("Enter the number of electricity units consumed: ");
    if (scanf("%f", &units) != 1 || units < 0) {
        printf("Invalid input. Units consumed cannot be negative.\n");
        return 1;
    }

    // Calculate bill based on slabs
    if (units <= 100) {
        bill = units * 5;
    } 
    else if (units <= 200) {
        bill = (100 * 5) + ((units - 100) * 7);
    } 
    else if (units <= 300) {
        bill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } 
    else {
        bill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 12);
    }

    // Display the total bill amount
    printf("Total Electricity Bill: ₹%.2f\n", bill);

    return 0;
}

