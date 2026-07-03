#include <stdio.h>

void moveZeroesToEnd(int arr[], int size) {
    int count = 0; // Index of next non-zero element
    
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    while (count < size) {
        arr[count++] = 0;
    }
}

int main() {
    int arr[] = {1, 0, 2, 0, 3, 0, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    moveZeroesToEnd(arr, size);
    
    printf("Array after moving zeroes: ");
    for (int i = 0; i < size; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}