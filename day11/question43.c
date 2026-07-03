


#include <stdio.h>

// Function returns 1 if prime, 0 if not
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int num = 29;
    if (isPrime(num))
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);
    return 0;
}