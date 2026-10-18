Q116 Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".


#include <stdio.h>
#include <stdlib.h>

#define HASH_SIZE 2047 // Choose a prime-like number for better distribution

// Structure for hash map nodes
typedef struct Node {
    int key;
    int value;
    struct Node* next;
} Node;

// Hash map structure
typedef struct {
    Node* buckets[HASH_SIZE];
} HashMap;

// Hash function
int hash(int key) {
    int h = key % HASH_SIZE;
    return h < 0 ? h + HASH_SIZE : h;
}

// Insert into hash map
void insert(HashMap* map, int key, int value) {
    int index = hash(key);
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->key = key;
    newNode->value = value;
    newNode->next = map->buckets[index];
    map->buckets[index] = newNode;
}

// Search in hash map (Returns index if found, -1 otherwise)
int search(HashMap* map, int key) {
    int index = hash(key);
    Node* curr = map->buckets[index];
    while (curr != NULL) {
        if (curr->key == key) {
            return curr->value;
        }
        curr = curr->next;
    }
    return -1;
}

// Free memory allocated for the hash map
void freeMap(HashMap* map) {
    for (int i = 0; i < HASH_SIZE; i++) {
        Node* curr = map->buckets[i];
        while (curr != NULL) {
            Node* temp = curr;
            curr = curr->next;
            free(temp);
        }
    }
}

void findTwoSum(int* nums, int numsSize, int target) {
    HashMap map = {0}; // Initialize all buckets to NULL

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        
        // Check if the complement already exists in the map
        int complementIndex = search(&map, complement);
        if (complementIndex != -1) {
            printf("%d %d\n", complementIndex, i);
            freeMap(&map);
            return;
        }
        
        // Store current number and its index in the map
        insert(&map, nums[i], i);
    }

    // If no solution is found (though the problem assumes exactly one exists)
    printf("-1 -1\n");
    freeMap(&map);
}

int main() {
    // Example test case
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    findTwoSum(nums, numsSize, target);

    return 0;
}
