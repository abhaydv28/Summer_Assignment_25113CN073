#include <stdio.h>
#define R 3
#define C 3

void printRowSum(int mat[R][C]) {
    for (int i = 0; i < R; i++) {
        int sum = 0;
        for (int j = 0; j < C; j++) {
            sum += mat[i][j];
        }
        printf("Sum of Row %d: %d\n", i + 1, sum);
    }
}

int main() {
    int mat[R][C] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printRowSum(mat);
    return 0;
}