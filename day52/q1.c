Q102 Write a Program to take a sorted array arr[] and an integer x as input, find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it. This element is called the ceil of x. If such an element does not exist, print -1. Note: In case of multiple occurrences of ceil of x, return the index of the first occurrence.

#include <stdio.h>

// Function to find the index of the ceil of x
int findCeil(int arr[], int n, int x) {
    int low = 0;
    int high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // If current element is greater than or equal to x,
        // it could be a potential ceil. Record it and move left
        // to find the first occurrence or a smaller valid element.
        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1; 
        } 
        // If current element is smaller than x, the ceil must be to the right.
        else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n, x;

    // Input the size of the array
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        return 1;
    }

    int arr[n];

    // Input the sorted array elements
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &arr[i]) != 1) {
            return 1;
        }
    }

    // Input the target element x
    printf("Enter the value of x: ");
    if (scanf("%d", &x) != 1) {
        return 1;
    }

    // Find and print the index of the ceil
    int result = findCeil(arr, n, x);
    printf("%d\n", result);

    return 0;
}
