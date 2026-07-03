#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1) result[k++] = arr1[i++];
    while (j < n2) result[k++] = arr2[j++];
}

int main() {
    int arr1[] = {1, 3, 5};
    int arr2[] = {2, 4, 6};
    int res[6];
    
    mergeArrays(arr1, 3, arr2, 3, res);
    
    printf("Merged Array: ");
    for (int i = 0; i < 6; i++) printf("%d ", res[i]);
    printf("\n");
    return 0;
}