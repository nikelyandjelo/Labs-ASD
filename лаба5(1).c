#include <stdio.h>
#define N 7
#define M 7

int A[N][M] = {
{6, 7, 3, -5, 6, 1, 2,},
{ 2, 5, 4, -6, 2, 1, 3, },
{ 3, 5, 4, -3, 3, 5, 2, },
{ 4, 4, 2, 3, 7, 6, 5, },
{ 5, 3, 1, -1, 1, 3, 4, },
{ 2, 6, 4, -6, 2, -5, 3, },
{ 3, 5, 3, -3, 3, 4, -7, }, };

void printM() {
    for (int R = 0; R < N; R++) {
        for (int C = 0; C < M; C++) {
            printf("%d ", A[R][C]);
        }
        printf("\n");
    }
}
int main() {
    printf("Initial matrix: \n");
    printM();
    int j, n = 7, key;
    for (int i = 1; i < n; i++) {
        key = A[i][i];
        j = i - 1;
        while (j >= 0 && A[j][j] < key) {
            A[j + 1][j + 1] = A[j][j];
            j--;
        };
        A[j + 1][j + 1] = key;
    };
    printf("Result: \n");
    printM();
}