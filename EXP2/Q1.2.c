//1) Write recursive code of linear search.
#include <stdio.h>

int linearSearchRecursive(int arr[], int n, int key, int index) {
    if (index >= n) {
        return -1; // Base case: key not found
    }
    if (arr[index] == key) {
        return index; // Key found at current index
    }
    return linearSearchRecursive(arr, n, key, index + 1); // Recursive call for next index
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;

    int result = linearSearchRecursive(arr, n, key, 0);

    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found\n");

    return 0;
}
