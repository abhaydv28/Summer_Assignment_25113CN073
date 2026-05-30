#include <stdio.h>

int main() {
    int n1, n2, gcd;
    
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);
    
    // Store original values in case they get changed
    int temp1 = n1;
    int temp2 = n2;
    
    while (temp2 != 0) {
        int temp = temp2;
        temp2 = temp1 % temp2;
        temp1 = temp;
    }
    gcd = temp1;
    
    printf("GCD of %d and %d is %d\n", n1, n2, gcd);
    return 0;
}