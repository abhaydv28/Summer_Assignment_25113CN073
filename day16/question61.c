#include <stdio.h>

int findMissingNumber(int arr[], int size, int n) {
    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for (int i = 0; i < size; i++) {
        actualSum += arr[i];
    }
    return expectedSum - actualSum;
}

int main() {
    int arr[] = {1, 2, 4, 5, 6}; // '3' is missing
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 6; // Range is 1 to 6
    
    printf("Missing Number: %d\n", findMissingNumber(arr, size, n));
    return 0;
}