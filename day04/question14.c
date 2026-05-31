#include <stdio.h>

long long getNthFibonacci(int n) {
    if (n <= 0) return -1; 
    if (n == 1) return 0;
    if (n == 2) return 1;

    long long a = 0, b = 1, next;
    for (int i = 3; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    long long result = getNthFibonacci(n);
    if (result == -1) {
        printf("Invalid input.\n");
    } else {
        printf("The %dth Fibonacci term is: %lld\n", n, result);
    }
    return 0;
}