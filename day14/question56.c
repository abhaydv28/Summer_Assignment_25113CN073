#include <stdio.h>

void printDuplicates(int arr[], int size) {
    printf("Duplicate elements: ");
    int found = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                // To avoid printing the same duplicate multiple times
                int alreadyPrinted = 0;
                for (int k = 0; k < i; k++) {
                    if (arr[k] == arr[i]) alreadyPrinted = 1;
                }
                if (!alreadyPrinted) {
                    printf("%d ", arr[i]);
                    found = 1;
                }
                break;
            }
        }
    }
    if (!found) printf("None");
    printf("\n");
}

int main() {
    int arr[] = {4, 3, 2, 7, 8, 2, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    printDuplicates(arr, size);
    return 0;
}