#include <stdio.h>
#include <math.h>

// Function to check Armstrong number
int isArmstrong(int n) {
    int original = n, temp = n, sum = 0, digits = 0;
    
    // Count digits
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    
    temp = n;
    while (temp > 0) {
        int remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }
    return (original == sum);
}

int main() {
    int num = 153;
    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}