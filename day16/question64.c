#include <stdio.h>

// Function returns the new size of the unique array
int removeDuplicates(int arr[], int size) {
    if (size == 0 || size == 1) return size;
    
    int newSize = 0;
    for (int i = 0; i < size; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < newSize; j++) {
            if (arr[i] == arr[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            arr[newSize] = arr[i];
            newSize++;
        }
    }
    return newSize;
}

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int n = removeDuplicates(arr, size);
    
    printf("Array after removing duplicates: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}