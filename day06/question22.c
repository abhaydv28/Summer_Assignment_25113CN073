#include <stdio.h>
#include <math.h>

int main() {
    int n, rem, i = 0;
    long decimal = 0;

    scanf("%d", &n);

    while(n != 0) {
        rem = n % 10;
        decimal += rem * pow(2, i);
        n /= 10;
        i++;
    }

    printf("%ld", decimal);

    return 0;
}