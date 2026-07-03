#include <stdio.h>

int binarySearch(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int main() {
    int arr[] = {12, 22, 34, 45, 64}; // Array must be sorted
    int index = binarySearch(arr, 5, 34);
    if (index != -1) printf("Element found at index: %d\n", index);
    else printf("Element not found\n");
    return 0;
}