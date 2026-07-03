#include <stdio.h>
#define N 3

int getDiagonalSum(int mat[N][N]) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += mat[i][i]; // Primary diagonal
    }
    return sum;
}

int main() {
    int mat[N][N] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Diagonal Sum: %d\n", getDiagonalSum(mat));
    return 0;
}