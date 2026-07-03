#include <stdio.h>

void findPair(int arr[], int size, int targetSum) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] + arr[j] == targetSum) {
                printf("Pair found: (%d, %d)\n", arr[i], arr[j]);
                return;
            }
        }
    }
    printf("No pair found with the given sum.\n");
}

int main() {
    int arr[] = {8, 7, 2, 5, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 10;
    
    findPair(arr, size, sum);
    return 0;
}