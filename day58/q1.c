Q108 Write a Program to take an integer array nums. Print an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i]. The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

#include <stdio.h>
#include <stdlib.h>

/**
 * Function to calculate the product of array except self.
 * Note: The returned array must be dynamically allocated and its size is stored in the returnSize pointer.
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    // 1. Allocate memory for the answer array
    int* answer = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;
    
    // 2. First Pass: Compute prefix products
    // answer[i] will temporarily store the product of all elements to the left of i
    int prefix = 1;
    for (int i = 0; i < numsSize; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }
    
    // 3. Second Pass: Compute suffix products on the fly
    // Multiply the existing prefix products with the cumulative right-side products
    int suffix = 1;
    for (int i = numsSize - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }
    
    return answer;
}

// Driver program to test the functionality
int main() {
    int nums[] = {1, 2, 3, 4};
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;
    
    printf("Input Array: ");
    for (int i = 0; i < numsSize; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    
    // Get the product except self array
    int* answer = productExceptSelf(nums, numsSize, &returnSize);
    
    printf("Output Array: ");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", answer[i]);
    }
    printf("\n");
    
    // Free the dynamically allocated memory
    free(answer);
    
    return 0;
}
