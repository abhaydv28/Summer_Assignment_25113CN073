#include <stdio.h>

// Function to return the maximum of two numbers
int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1 = 45, num2 = 82;
    printf("Maximum: %d\n", findMax(num1, num2));
    return 0;
}