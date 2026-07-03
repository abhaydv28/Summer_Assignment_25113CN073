#include <stdio.h>

void findMinMax(int arr[], int size) {
    int max = arr[0];
    int min = arr[0];
    
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    
    printf("Largest element = %d\n", max);
    printf("Smallest element = %d\n", min);
}

int main() {
    int arr[] = {23, 5, 89, 12, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    findMinMax(arr, size);
    return 0;
}