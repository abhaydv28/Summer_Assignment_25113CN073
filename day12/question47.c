#include <stdio.h>

// Function to print Fibonacci series up to n terms
void printFibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    printf("Fibonacci Series: ");
    for (int i = 1; i <= n; ++i) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("\n");
}

int main() {
    int terms = 10;
    printFibonacci(terms);
    return 0;
}