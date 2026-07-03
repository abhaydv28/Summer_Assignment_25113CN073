#include <stdio.h>
#define R 3
#define C 3

void printColSum(int mat[R][C]) {
    for (int j = 0; j < C; j++) {
        int sum = 0;
        for (int i = 0; i < R; i++) {
            sum += mat[i][j];
        }
        printf("Sum of Column %d: %d\n", j + 1, sum);
    }
}

int main() {
    int mat[R][C] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printColSum(mat);
    return 0;
}