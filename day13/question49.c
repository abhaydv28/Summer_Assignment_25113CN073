#include <stdio.h>

void inputArray(int arr[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int size) {
    printf("Array elements are: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size = 5;
    int arr[size];
    inputArray(arr, size);
    displayArray(arr, size);
    return 0;
}