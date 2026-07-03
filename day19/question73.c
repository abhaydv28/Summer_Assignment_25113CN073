#include <stdio.h>
#define R 2
#define C 2

void addMatrices(int A[R][C], int B[R][C], int res[R][C]) {
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            res[i][j] = A[i][j] + B[i][j];
}

int main() {
    int A[R][C] = {{1, 2}, {3, 4}}, B[R][C] = {{5, 6}, {7, 8}}, res[R][C];
    addMatrices(A, B, res);
    printf("Sum Matrix:\n%d %d\n%d %d\n", res[0][0], res[0][1], res[1][0], res[1][1]);
    return 0;
}