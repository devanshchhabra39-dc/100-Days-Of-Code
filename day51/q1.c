Q101 Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.

#include <stdio.h>

// Function to find the first occurrence of the target
int findFirstOccurrence(int nums[], int size, int target) {
    int low = 0, high = size - 1;
    int first = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            first = mid;      // Record the index
            high = mid - 1;   // Keep searching on the left side
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return first;
}

// Function to find the last occurrence of the target
int findLastOccurrence(int nums[], int size, int target) {
    int low = 0, high = size - 1;
    int last = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (nums[mid] == target) {
            last = mid;       // Record the index
            low = mid + 1;    // Keep searching on the right side
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return last;
}

int main() {
    int n, target;

    // Take array size as input
    printf("Enter the number of elements in the sorted array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }

    int nums[n];

    // Take array elements as input
    printf("Enter %d sorted elements (can have duplicates):\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Take target value as input
    printf("Enter the target integer to search: ");
    scanf("%d", &target);

    // Find occurrences
    int firstIdx = findFirstOccurrence(nums, n, target);
    int lastIdx = findLastOccurrence(nums, n, target);

    // Print the results
    printf("First Occurrence Index: %d\n", firstIdx);
    printf("Last Occurrence Index: %d\n", lastIdx);

    return 0;
}
