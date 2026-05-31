#include <stdio.h>
#include <math.h>

void printArmstrongInRange(int start, int end) {
    for (int i = start; i <= end; i++) {
        int num = i, remainder, n = 0;
        double result = 0.0;

        int temp = num;
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        temp = num;
        while (temp != 0) {
            remainder = temp % 10;
            result += round(pow(remainder, n));
            temp /= 10;
        }

        if ((int)result == i) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int start, end;
    printf("Enter start range: ");
    scanf("%d", &start);
    printf("Enter end range: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are: ", start, end);
    printArmstrongInRange(start, end);

    return 0;
}