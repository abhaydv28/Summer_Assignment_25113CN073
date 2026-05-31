#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum = num, remainder, n = 0;
    double result = 0.0;

    // Find the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        // round handles potential floating-point precision issues with pow()
        result += round(pow(remainder, n)); 
        temp /= 10;
    }

    return ((int)result == originalNum);
}

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}