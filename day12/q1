Q23 Write a program to calculate library fine based on late days as follows: 
First 5 days late: ₹2/day 
Next 5 days late: ₹4/day 
Next 20 days days late: ₹6/day 
More than 30 days: Membership Cancelled.

#include <stdio.h>

int main() {
    int days;
    int fine = 0;

    // Prompt user for input
    printf("Enter the number of days late: ");
    if (scanf("%d", &days) != 1 || days < 0) {
        printf("Invalid input! Please enter a non-negative number of days.\n");
        return 1;
    }

    // Calculate fine based on slabs
    if (days == 0) {
        printf("No fine. The book was returned on time.\n");
    } 
    else if (days <= 5) {
        // First 5 days: ₹2/day
        fine = days * 2;
        printf("Total Fine: ₹%d\n", fine);
    } 
    else if (days <= 10) {
        // Next 5 days: ₹4/day (First 5 days charged at ₹2/day)
        fine = (5 * 2) + ((days - 5) * 4);
        printf("Total Fine: ₹%d\n", fine);
    } 
    else if (days <= 30) {
        // Next 20 days: ₹6/day (Slab 1 + Slab 2 + Remaining days)
        fine = (5 * 2) + (5 * 4) + ((days - 10) * 6);
        printf("Total Fine: ₹%d\n", fine);
    } 
    else {
        // More than 30 days
        printf("Alert: More than 30 days late! Your Membership is Cancelled.\n");
    }

    return 0;
}

