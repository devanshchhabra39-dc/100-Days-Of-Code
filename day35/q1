Q69 Find the second largest element in an array.

#include <stdio.h>
#include <limits.h> // Required for INT_MIN

void findSecondLargest(int arr[], int size) {
    // There must be at least two elements
    if (size < 2) {
        printf("Invalid Input: Array must contain at least 2 elements.\n");
        return;
    }

    // Initialize both variables to the lowest possible integer value
    int largest = INT_MIN;
    int second_largest = INT_MIN;

    for (int i = 0; i < size; i++) {
        // If current element is greater than 'largest', 
        // update both 'second_largest' and 'largest'
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        }
        // If current element is smaller than 'largest' but greater than 'second_largest'
        else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    // Check if a valid second largest element was found
    if (second_largest == INT_MIN) {
        printf("There is no second largest element (all elements might be equal).\n");
    } else {
        printf("The largest element is: %d\n", largest);
        printf("The second largest element is: %d\n", second_largest);
    }
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    findSecondLargest(arr, size);

    return 0;
}
