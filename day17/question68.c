#include <stdio.h>

void findCommon(int arr1[], int n1, int arr2[], int n2) {
    printf("Common Elements: ");
    for (int i = 0; i < n1; i++) {
        // Prevent printing duplicates from the same array
        if (i > 0 && arr1[i] == arr1[i - 1]) continue; 
        for (int j = 0; j < n2; j++) {
            if (arr1[i] == arr2[j]) {
                printf("%d ", arr1[i]);
                break;
            }
        }
    }
    printf("\n");
}

int main() {
    int arr1[] = {10, 15, 20, 25};
    int arr2[] = {15, 20, 30, 40};
    findCommon(arr1, 4, arr2, 4);
    return 0;
}