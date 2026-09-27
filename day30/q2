Q60 Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main() {
    // 1. Initialize the array
    int arr[] = {12, -5, 0, 45, -9, 0, 8, -2, 3, 0};
    
    // 2. Calculate the total number of elements in the array
    int size = sizeof(arr) / sizeof(arr[0]);
    
    // 3. Initialize counter variables to 0
    int positive_count = 0;
    int negative_count = 0;
    int zero_count = 0;
    
    // 4. Loop through each element and check its value
    for (int i = 0; i < size; i++) {
        if (arr[i] > 0) {
            positive_count++;
        } 
        else if (arr[i] < 0) {
            negative_count++;
        } 
        else {
            zero_count++;
        }
    }
    
    // 5. Print the results
    printf("Array Analysis:\n");
    printf("Positive numbers: %d\n", positive_count);
    printf("Negative numbers: %d\n", negative_count);
    printf("Zero elements:    %d\n", zero_count);
    
    return 0;
}
