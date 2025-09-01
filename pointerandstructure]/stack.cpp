#include <stdio.h>

// Function for linear search
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; // Return the index where the element is found
        }
    }
    return -1; // Return -1 if the element is not found
}

int main() {
    int arr[] = {10, 5, 8, 2, 7, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 7;

    int result = linearSearch(arr, size, key);

    if (result != -1) {
        printf("Element %d found at index %d.\n", key, result);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}
