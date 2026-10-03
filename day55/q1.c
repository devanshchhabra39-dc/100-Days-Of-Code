Q105 Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include <stdio.h>

// Function to find the majority element
int findMajorityElement(int nums[], int n) {
    int candidate = 0;
    int count = 0;

    // Step 1: Find a candidate for the majority element
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = nums[i];
            count = 1;
        } else if (nums[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify if the candidate is actually the majority element
    int actualCount = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] == candidate) {
            actualCount++;
        }
    }

    // Check if the frequency is strictly greater than n / 2
    if (actualCount > n / 2) {
        return candidate;
    } else {
        return -1;
    }
}

int main() {
    int n;

    // Input the size of the array
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int nums[n];

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Find and print the majority element
    int result = findMajorityElement(nums, n);
    printf("Majority Element: %d\n", result);

    return 0;
}
