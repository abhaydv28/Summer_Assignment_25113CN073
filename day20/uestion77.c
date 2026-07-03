#include <stdio.h>
#define R1 2
#define C1 3
#define R2 3
#define C2 2

void multiplyMatrices(int A[R1][C1], int B[R2][C2], int res[R1][C2]) {
    for (int i = 0; i < R1; i++) {
        for (int j = 0; j < C2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < C1; k++) {
                res[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

int main() {
    int A[R1][C1] = {{1, 2, 3}, {4, 5, 6}};
    int B[R2][C2] = {{7, 8}, {9, 10}, {11, 12}};
    int res[R1][C2];
    
    multiplyMatrices(A, B, res);
    
    printf("Product Matrix:\n%d %d\n%d %d\n", res[0][0], res[0][1], res[1][0], res[1][1]);
    return 0;
}