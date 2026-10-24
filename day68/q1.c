Q118 Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

#include <stdio.h>

int main() {
    int n;

    // Take the size of the array as input
    printf("Enter the size of the array (n): ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1;
    }

    int arr[n];
    int actual_sum = 0;

    // Input the array elements and calculate their sum
    printf("Enter %d elements (between 0 and %d):\n", n, n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        actual_sum += arr[i];
    }

    // Calculate the expected sum of numbers from 0 to n
    int expected_sum = (n * (n + 1)) / 2;

    // The difference is the missing number
    int missing_number = expected_sum - actual_sum;

    printf("The missing number is: %d\n", missing_number);

    return 0;
}
