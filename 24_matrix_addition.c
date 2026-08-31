#include <stdio.h>

int main() {
    int a[3][3], b[3][3], sum[3][3];
    int i, j;

    printf("Enter elements of Matrix A (3x3):\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of Matrix B (3x3):\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("\nAddition Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++)
            printf("%d\t", sum[i][j]);
        printf("\n");
    }

    return 0;
}
