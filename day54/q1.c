Q104 Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

#include <stdio;

int main() {
    int n;
    
    // Take input from the user
    if (scanf("%d", &n) != 1) {
        printf("-1\n");
        return 0;
    }
    
    // Total sum from 1 to n
    int total_sum = (n * (n + 1)) / 2;
    int left_sum = 0;
    int pivot = -1;
    
    // Iterate through numbers from 1 to n to find the pivot
    for (int x = 1; x <= n; x++) {
        left_sum += x;
        
        // Right sum includes x, so it is: total_sum - (sum before x)
        // Which is equivalent to: total_sum - left_sum + x
        int right_sum = total_sum - left_sum + x;
        
        if (left_sum == right_sum) {
            pivot = x;
            break; // Found the unique pivot, exit loop
        }
    }
    
    // Print the result
    printf("%d\n", pivot);
    
    return 0;
}
