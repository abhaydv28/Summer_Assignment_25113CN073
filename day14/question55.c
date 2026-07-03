
#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int size) {
    int max = INT_MIN, secondMax = INT_MIN;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }
    return secondMax;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int result = findSecondLargest(arr, size);
    if (result == INT_MIN)
        printf("No second largest element exists.\n");
    else
        printf("The second largest element is: %d\n", result);
    return 0;
}