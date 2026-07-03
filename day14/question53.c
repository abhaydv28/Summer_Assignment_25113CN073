#include <stdio.h>

// Function returns the index of the element if found, otherwise returns -1
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i; 
        }
    }
    return -1;
}

int main() {
    int arr[] = {24, 50, 10, 85, 42};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 85;
    
    int index = linearSearch(arr, size, key);
    if (index != -1)
        printf("Element found at index: %d\n", index);
    else
        printf("Element not found.\n");
    return 0;
}