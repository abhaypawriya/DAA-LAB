//Write recursive code of Binary search
#include <stdio.h>

int binarySearchRecursive(int arr[], int low, int high, int key) {
    if (low > high) {
        return -1; // Base case: key not found
    }

    int mid = low + (high - low) / 2; // Prevents overflow

    if (arr[mid] == key) {
        return mid; // Key found
    } else if (arr[mid] < key) {
        return binarySearchRecursive(arr, mid + 1, high, key); // Search in right half
    } else {
        return binarySearchRecursive(arr, low, mid - 1, key); // Search in left half
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = binarySearchRecursive(arr, 0, n - 1, key);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
