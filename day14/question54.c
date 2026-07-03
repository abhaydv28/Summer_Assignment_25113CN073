#include <stdio.h>

int findFrequency(int arr[], int size, int key) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) count++;
    }
    return count;
}

int main() {
    int arr[] = {2, 3, 2, 5, 2, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 2;
    
    printf("Frequency of %d: %d\n", key, findFrequency(arr, size, key));
    return 0;
}