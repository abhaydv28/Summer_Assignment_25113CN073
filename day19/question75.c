#include <stdio.h>
#define R 2
#define C 2

void transposeMatrix(int matrix[R][C], int trans[C][R]) {
    for (int i = 0; i < R; i++)
        for (int j = 0; j < C; j++)
            trans[j][i] = matrix[i][j];
}

int main() {
    int mat[R][C] = {{1, 2}, {3, 4}}, trans[C][R];
    transposeMatrix(mat, trans);
    printf("Transposed Matrix:\n%d %d\n%d %d\n", trans[0][0], trans[0][1], trans[1][0], trans[1][1]);
    return 0;
}