#include <stdio.h>

void printUnion(int arr1[], int n1, int arr2[], int n2) {
    printf("Union: ");
    for (int i = 0; i < n1; i++) printf("%d ", arr1[i]);
    
    for (int i = 0; i < n2; i++) {
        int duplicate = 0;
        for (int j = 0; j < n1; j++) {
            if (arr2[i] == arr1[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) printf("%d ", arr2[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {3, 4, 5, 6};
    printUnion(arr1, 4, arr2, 4);
    return 0;
}