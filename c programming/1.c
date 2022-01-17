#include <stdio.h>
int main() {
    int matrix[4][4],i,j;
    printf("Enter values of 4x4 matrix\n");
    for (i = 0; i < 4; ++i) {
        for (j = 0; j < 4; ++j) scanf("%d", &matrix[i][j]);
    }

    int sum = 0;
    for (i = 0; i < 4; ++i) sum += matrix[i][i];

    printf("The principal sum is: %d", sum);
    return 0;
}
