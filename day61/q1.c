Q111 Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.

#include <stdio.h>

void printFirstNegative(int arr[], int n, int k) {
    // Array to act as a queue to store indices of negative elements
    int negativeIndices[n];
    int head = 0, tail = 0;

    // Process the first window of size k
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0) {
            negativeIndices[tail++] = i;
        }
    }

    // Process the rest of the elements
    for (int i = k; i <= n; i++) {
        // 1. Print the first negative element of the previous window
        if (head < tail) {
            printf("%d ", arr[negativeIndices[head]]);
        } else {
            printf("0 ");
        }

        // If we have reached the end of the array, break
        if (i == n) break;

        // 2. Remove elements that are out of the current window
        while (head < tail && negativeIndices[head] <= i - k) {
            head++;
        }

        // 3. Add the current element to the queue if it is negative
        if (arr[i] < 0) {
            negativeIndices[tail++] = i;
        }
    }
    printf("\n");
}

int main() {
    int n, k;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the window size
    printf("Enter the window size (k): ");
    scanf("%d", &k);

    // Function call
    printf("Output:\n");
    printFirstNegative(arr, n, k);

    return 0;
}
