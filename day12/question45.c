#include <stdio.h>

// Function to check if a number is a palindrome
int isPalindrome(int n) {
    int original = n, reversed = 0, remainder;
    while (n > 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    return (original == reversed);
}

int main() {
    int num = 121;
    if (isPalindrome(num))
        printf("%d is a Palindrome.\n", num);
    else
        printf("%d is not a Palindrome.\n", num);
    return 0;
}