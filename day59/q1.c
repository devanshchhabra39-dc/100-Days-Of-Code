Q109 Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

#include < <stdio.h> >

// Function to find and print the majority element
void printMajorityElement(int nums[], int n) {
    int candidate = 0;
    int count = 0;

    // Step 1: Find a potential majority candidate
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

    // A majority element must appear strictly more than n / 2 times
    if (actualCount > n / 2) {
        printf("%d\n", candidate);
    } else {
        printf("-1\n");
    }
}

int main() {
    int n;

    // Read the size of the array
    printf("Enter the size of the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("-1\n");
        return 0;
    }

    int nums[n];

    // Read the array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Call the function to print the result
    printf("Majority Element: ");
    printMajorityElement(nums, n);

    return 0;
}
