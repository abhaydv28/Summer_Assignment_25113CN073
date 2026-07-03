#include <stdio.h>

// Function to count even and odd numbers in an array
void countEvenOdd(int arr[], int size) {
    int evenCount = 0;
    int oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++; // Increment if divisible by 2
        } else {
            oddCount++;  // Increment otherwise
        }
    }

    printf("Total Even elements: %d\n", evenCount);
    printf("Total Odd elements: %d\n", oddCount);
}

int main() {
    // Example array
    int arr[] = {12, 37, 44, 95, 8, 21, 60};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Displaying the original array
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n\n");

    // Call function to count and print the results
    countEvenOdd(arr, size);

    return 0;
}