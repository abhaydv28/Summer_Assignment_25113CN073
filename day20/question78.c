#include <stdio.h>
#define N 3

int isSymmetric(int mat[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (mat[i][j] != mat[j][i]) return 0;
        }
    }
    return 1;
}

int main() {
    int mat[N][N] = {{1, 2, 3}, {2, 4, 5}, {3, 5, 6}};
    if (isSymmetric(mat)) printf("The matrix is Symmetric.\n");
    else printf("The matrix is not Symmetric.\n");
    return 0;
}